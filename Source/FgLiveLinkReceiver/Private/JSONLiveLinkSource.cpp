// Copyright 2023 FACEGOOD, Inc. All Rights Reserved.

#include "JSONLiveLinkSource.h"

#include "ILiveLinkClient.h"
#include "LiveLinkTypes.h"
#include "Roles/LiveLinkAnimationRole.h"
#include "Roles/LiveLinkAnimationTypes.h"
#include "Async/Async.h"
#include "Common/UdpSocketBuilder.h"
#include "HAL/RunnableThread.h"
#include "Json.h"
#include "Sockets.h"
#include "SocketSubsystem.h"

#define LOCTEXT_NAMESPACE "JSONLiveLinkSource"

#define RECV_BUFFER_SIZE 1024 * 1024

FJSONLiveLinkSource::FJSONLiveLinkSource(FIPv4Endpoint InEndpoint)
	: Socket(nullptr)
	, Stopping(false)
	, Thread(nullptr)
	, WaitTime(FTimespan::FromMilliseconds(100))
{
	// defaults
	DeviceEndpoint = InEndpoint;

	SourceStatus = LOCTEXT("SourceStatus_DeviceNotFound", "Device Not Found");
	SourceType = LOCTEXT("JSONLiveLinkSourceType", "FaceGoodAnimSource");
	SourceMachineName = LOCTEXT("JSONLiveLinkSourceMachineName", "localhost");

	//setup socket
	if (DeviceEndpoint.Address.IsMulticastAddress())
	{
		Socket = FUdpSocketBuilder(TEXT("JSONSOCKET"))
			.AsNonBlocking()
			.AsReusable()
			.BoundToPort(DeviceEndpoint.Port)
			.WithReceiveBufferSize(RECV_BUFFER_SIZE)

			.BoundToAddress(FIPv4Address::Any)
			.JoinedToGroup(DeviceEndpoint.Address)
			.WithMulticastLoopback()
			.WithMulticastTtl(2);

	}
	else
	{
		Socket = FUdpSocketBuilder(TEXT("JSONSOCKET"))
			.AsNonBlocking()
			.AsReusable()
			.BoundToAddress(DeviceEndpoint.Address)
			.BoundToPort(DeviceEndpoint.Port)
			.WithReceiveBufferSize(RECV_BUFFER_SIZE);
	}

	RecvBuffer.SetNumUninitialized(RECV_BUFFER_SIZE);

	if ((Socket != nullptr) && (Socket->GetSocketType() == SOCKTYPE_Datagram))
	{
		SocketSubsystem = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM);

		Start();

		SourceStatus = LOCTEXT("SourceStatus_Receiving", "Receiving");
	}
}

FJSONLiveLinkSource::~FJSONLiveLinkSource()
{
	Stop();
	if (Thread != nullptr)
	{
		Thread->WaitForCompletion();
		delete Thread;
		Thread = nullptr;
	}
	if (Socket != nullptr)
	{
		Socket->Close();
		ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->DestroySocket(Socket);
	}
}

void FJSONLiveLinkSource::ReceiveClient(ILiveLinkClient* InClient, FGuid InSourceGuid)
{
	Client = InClient;
	SourceGuid = InSourceGuid;
}


bool FJSONLiveLinkSource::IsSourceStillValid() const
{
	// Source is valid if we have a valid thread and socket
	bool bIsSourceValid = !Stopping && Thread != nullptr && Socket != nullptr;
	return bIsSourceValid;
}


bool FJSONLiveLinkSource::RequestSourceShutdown()
{
	Stop();

	return true;
}
// FRunnable interface

void FJSONLiveLinkSource::Start()
{
	ThreadName = "JSON UDP Receiver ";
	ThreadName.AppendInt(FAsyncThreadIndex::GetNext());

	Thread = FRunnableThread::Create(this, *ThreadName, 128 * 1024, TPri_AboveNormal, FPlatformAffinity::GetPoolThreadMask());
}

void FJSONLiveLinkSource::Stop()
{
	Stopping = true;
}

uint32 FJSONLiveLinkSource::Run()
{
	TSharedRef<FInternetAddr> Sender = SocketSubsystem->CreateInternetAddr();

	while (!Stopping)
	{
		if (Socket->Wait(ESocketWaitConditions::WaitForRead, WaitTime))
		{
			uint32 Size;

			while (Socket->HasPendingData(Size))
			{
				int32 Read = 0;

				if (Socket->RecvFrom(RecvBuffer.GetData(), RecvBuffer.Num(), Read, *Sender))
				{
					if (Read > 0)
					{
						TSharedPtr<TArray<uint8>, ESPMode::ThreadSafe> ReceivedData = MakeShareable(new TArray<uint8>());
						ReceivedData->SetNumUninitialized(Read);
						memcpy(ReceivedData->GetData(), RecvBuffer.GetData(), Read);
						AsyncTask(ENamedThreads::GameThread, [this, ReceivedData]() { HandleReceivedData(ReceivedData); });
					}
				}
			}
		}
	}
	return 0;
}

void FJSONLiveLinkSource::HandleReceivedData(TSharedPtr<TArray<uint8>, ESPMode::ThreadSafe> ReceivedData)
{
	FString JsonString;
	JsonString.Empty(ReceivedData->Num());
	for (uint8& Byte : *ReceivedData.Get())
	{
		JsonString += TCHAR(Byte);
	}


	TSharedPtr<FJsonObject> JsonObject;
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonString);

	if (FJsonSerializer::Deserialize(Reader, JsonObject))
	{
		for (TPair<FString, TSharedPtr<FJsonValue>>& JsonField : JsonObject->Values)
		{
			const TSharedPtr<FJsonObject> MyJsonObject = JsonField.Value->AsObject();

			FName SubjectName(*JsonField.Key);
			const TArray<TSharedPtr<FJsonValue>>* properties;
			const TSharedPtr<FJsonObject>* joints;

			bool bCreateSubject = !EncounteredSubjects.Contains(SubjectName);


			if (bCreateSubject)
			{
				FLiveLinkStaticDataStruct StaticDataStruct = FLiveLinkStaticDataStruct(FLiveLinkSkeletonStaticData::StaticStruct());
				if (!StaticDataStruct.IsValid())
					break;
				FLiveLinkSkeletonStaticData& StaticData = *StaticDataStruct.Cast<FLiveLinkSkeletonStaticData>();

				if (MyJsonObject->TryGetArrayField(TEXT("Properties"), properties) )
				{
					StaticData.PropertyNames.SetNumUninitialized(properties->Num());
					for (int pnameIdx = 0; pnameIdx < properties->Num(); ++pnameIdx)
					{
						const TSharedPtr<FJsonValue>& pname = (*properties)[pnameIdx];
						const TSharedPtr<FJsonObject> pnameObject = pname->AsObject();

						FString propertyName;
						if (pnameObject->TryGetStringField(TEXT("Name"), propertyName))
						{
							StaticData.PropertyNames[pnameIdx] = FName(*propertyName);
						}
					}
				}

				if (MyJsonObject->TryGetObjectField(TEXT("Joints"), joints))
				{
					const TArray<TSharedPtr<FJsonValue>> jointParents = joints->Get()->GetArrayField(TEXT("ParentIdx"));
					const TArray<TSharedPtr<FJsonValue>> jointnames = joints->Get()->GetArrayField(TEXT("Names"));
					StaticData.BoneNames.SetNumUninitialized(jointnames.Num());
					StaticData.BoneParents.SetNumUninitialized(jointnames.Num());

					for (int pnameIdx = 0; pnameIdx < jointnames.Num(); ++pnameIdx)
					{

						FString BoneName = jointnames[pnameIdx]->AsString();
						StaticData.BoneNames[pnameIdx] = FName(*BoneName);
						jointParents[pnameIdx].Get()->TryGetNumber(StaticData.BoneParents[pnameIdx]);
					}

				}

				Client->PushSubjectStaticData_AnyThread({ SourceGuid, SubjectName }, ULiveLinkAnimationRole::StaticClass(), MoveTemp(StaticDataStruct));
				EncounteredSubjects.Add(SubjectName);

			}


			FLiveLinkFrameDataStruct FrameDataStruct = FLiveLinkFrameDataStruct(FLiveLinkAnimationFrameData::StaticStruct());
			FLiveLinkAnimationFrameData& FrameData = *FrameDataStruct.Cast<FLiveLinkAnimationFrameData>();

			MyJsonObject->TryGetNumberField(TEXT("FrameId"), FrameData.FrameId);

			FrameData.MetaData.SceneTime.Time.FrameNumber = FrameData.FrameId;

			if (MyJsonObject->TryGetArrayField(TEXT("Properties"), properties))
			{
				FrameData.PropertyValues.SetNumUninitialized(properties->Num());
				for (int pnameIdx = 0; pnameIdx < properties->Num(); ++pnameIdx)
				{
					const TSharedPtr<FJsonValue>& pname = (*properties)[pnameIdx];
					const TSharedPtr<FJsonObject> pnameObject = pname->AsObject();

					float value;
					if (pnameObject->TryGetNumberField(TEXT("Value"), value))
					{
						FrameData.PropertyValues[pnameIdx] = value;
					}
				}

			}

			if (MyJsonObject->TryGetObjectField(TEXT("Joints"), joints))
			{

				const TArray<TSharedPtr<FJsonValue>> jointTransforms = joints->Get()->GetArrayField(TEXT("Transforms"));

				FrameData.Transforms.SetNumUninitialized(jointTransforms.Num());
				for (int pnameIdx = 0; pnameIdx < jointTransforms.Num(); ++pnameIdx)
				{
					auto boneTrans = jointTransforms[pnameIdx]->AsArray();
					FTransform trans;
					trans.SetIdentity();
					trans.SetTranslation(FVector(boneTrans[0]->AsNumber(), boneTrans[1]->AsNumber(), boneTrans[2]->AsNumber()));
					trans.SetRotation(FQuat(FRotator(boneTrans[3]->AsNumber(), boneTrans[4]->AsNumber(), boneTrans[5]->AsNumber())));
					FrameData.Transforms[pnameIdx] = trans;
				}

			}

			Client->PushSubjectFrameData_AnyThread({ SourceGuid, SubjectName }, MoveTemp(FrameDataStruct));
		}
	}
}

#undef LOCTEXT_NAMESPACE
