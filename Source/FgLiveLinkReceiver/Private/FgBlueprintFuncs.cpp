// Copyright 2023 FACEGOOD, Inc. All Rights Reserved.
#include "FgBlueprintFuncs.h"
#include "JSONLiveLinkSource.h"
#include "Interfaces/IPv4/IPv4Endpoint.h"
#include "JSONLiveLinkSource.h"
#include "LiveLinkSourceFactory.h"
#include "JSONLiveLinkSourceFactory.h"
#include "ILiveLinkClient.h"
#include "Features/IModularFeatures.h"

TSharedPtr<FJSONLiveLinkSource> tlivelink = nullptr;

UFgLiveLinkReciverBPLibrary::UFgLiveLinkReciverBPLibrary(
	const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer) {}

void UFgLiveLinkReciverBPLibrary::FgInitReceiver()
{
	FIPv4Endpoint InEndpoint;
	FIPv4Endpoint::Parse("0.0.0.0:54321", InEndpoint);
	FString msg = InEndpoint.ToString();

	IModularFeatures& ModularFeatures = IModularFeatures::Get();

	if (ModularFeatures.IsModularFeatureAvailable(ILiveLinkClient::ModularFeatureName))
	{
		ILiveLinkClient* LiveLinkClient = &IModularFeatures::Get().GetModularFeature<ILiveLinkClient>(ILiveLinkClient::ModularFeatureName);
		tlivelink = MakeShareable(new FJSONLiveLinkSource(InEndpoint));
		LiveLinkClient->AddSource(tlivelink);
	}
}

void UFgLiveLinkReciverBPLibrary::FgStopReceiver()
{
	IModularFeatures& ModularFeatures = IModularFeatures::Get();

	if (ModularFeatures.IsModularFeatureAvailable(ILiveLinkClient::ModularFeatureName))
	{
		ILiveLinkClient* LiveLinkClient = &IModularFeatures::Get().GetModularFeature<ILiveLinkClient>(ILiveLinkClient::ModularFeatureName);
		LiveLinkClient->RemoveSource(tlivelink);
	}
}
