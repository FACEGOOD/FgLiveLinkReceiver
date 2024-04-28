// Copyright 2023 FACEGOOD, Inc. All Rights Reserved.
#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Roles/LiveLinkBasicTypes.h"
#include "FgBlueprintFuncs.generated.h"




UCLASS()
class UFgLiveLinkReciverBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

		UFUNCTION(BlueprintCallable, meta = (DisplayName = "FACEGOODLiveLinkSourceStart", Keywords = "FgLiveLinkReceiver"), Category = "FaceGood")
		static void FgInitReceiver();


	UFUNCTION(BlueprintCallable, meta = (DisplayName = "FACEGOODLiveLinkSourceStop", Keywords = "FgLiveLinkReceiver"), Category = "FaceGood")
		static void FgStopReceiver();
};

