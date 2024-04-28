// Copyright 2023 FACEGOOD, Inc. All Rights Reserved.

#include "JSONLiveLink.h"
#include "Interfaces/IPluginManager.h"
#include "Misc/Paths.h"
#define LOCTEXT_NAMESPACE "FFgLiveLinkReceiverModule"

void FFgLiveLinkReceiverModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

}

void FFgLiveLinkReceiverModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FFgLiveLinkReceiverModule, FgLiveLinkReceiver)