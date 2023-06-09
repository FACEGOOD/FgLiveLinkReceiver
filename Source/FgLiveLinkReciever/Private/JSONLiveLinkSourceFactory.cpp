// copyright FACEGOOD, Inc. All Rights Reserved.
#include "JSONLiveLinkSourceFactory.h"
#include "JSONLiveLinkSource.h"
#include "SJSONLiveLinkSourceFactory.h"

#define LOCTEXT_NAMESPACE "JSONLiveLinkSourceFactory"

FText UJSONLiveLinkSourceFactory::GetSourceDisplayName() const
{
	return LOCTEXT("SourceDisplayName", "FaceGood LiveLink Reciever");
}

FText UJSONLiveLinkSourceFactory::GetSourceTooltip() const
{
	return LOCTEXT("SourceTooltip", "Creates a connection to a FaceGood Udp Stream");
}

TSharedPtr<SWidget> UJSONLiveLinkSourceFactory::BuildCreationPanel(FOnLiveLinkSourceCreated InOnLiveLinkSourceCreated) const
{
	return SNew(SJSONLiveLinkSourceFactory)
		.OnOkClicked(SJSONLiveLinkSourceFactory::FOnOkClicked::CreateUObject(this, &UJSONLiveLinkSourceFactory::OnOkClicked, InOnLiveLinkSourceCreated));
}

TSharedPtr<ILiveLinkSource> UJSONLiveLinkSourceFactory::CreateSource(const FString& InConnectionString) const
{
	FIPv4Endpoint DeviceEndPoint;
	if (!FIPv4Endpoint::Parse(InConnectionString, DeviceEndPoint))
	{
		return TSharedPtr<ILiveLinkSource>();
	}

	return MakeShared<FJSONLiveLinkSource>(DeviceEndPoint);
}

void UJSONLiveLinkSourceFactory::OnOkClicked(FIPv4Endpoint InEndpoint, FOnLiveLinkSourceCreated InOnLiveLinkSourceCreated) const
{
	InOnLiveLinkSourceCreated.ExecuteIfBound(MakeShared<FJSONLiveLinkSource>(InEndpoint), InEndpoint.ToString());
}

#undef LOCTEXT_NAMESPACE