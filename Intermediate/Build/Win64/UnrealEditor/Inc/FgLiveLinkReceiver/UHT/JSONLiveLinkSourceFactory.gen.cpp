// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FgLiveLinkReceiver/Private/JSONLiveLinkSourceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJSONLiveLinkSourceFactory() {}

// Begin Cross Module References
FGLIVELINKRECEIVER_API UClass* Z_Construct_UClass_UJSONLiveLinkSourceFactory();
FGLIVELINKRECEIVER_API UClass* Z_Construct_UClass_UJSONLiveLinkSourceFactory_NoRegister();
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceFactory();
UPackage* Z_Construct_UPackage__Script_FgLiveLinkReceiver();
// End Cross Module References

// Begin Class UJSONLiveLinkSourceFactory
void UJSONLiveLinkSourceFactory::StaticRegisterNativesUJSONLiveLinkSourceFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJSONLiveLinkSourceFactory);
UClass* Z_Construct_UClass_UJSONLiveLinkSourceFactory_NoRegister()
{
	return UJSONLiveLinkSourceFactory::StaticClass();
}
struct Z_Construct_UClass_UJSONLiveLinkSourceFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "JSONLiveLinkSourceFactory.h" },
		{ "ModuleRelativePath", "Private/JSONLiveLinkSourceFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJSONLiveLinkSourceFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UJSONLiveLinkSourceFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_FgLiveLinkReceiver,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJSONLiveLinkSourceFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UJSONLiveLinkSourceFactory_Statics::ClassParams = {
	&UJSONLiveLinkSourceFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJSONLiveLinkSourceFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UJSONLiveLinkSourceFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UJSONLiveLinkSourceFactory()
{
	if (!Z_Registration_Info_UClass_UJSONLiveLinkSourceFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJSONLiveLinkSourceFactory.OuterSingleton, Z_Construct_UClass_UJSONLiveLinkSourceFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UJSONLiveLinkSourceFactory.OuterSingleton;
}
template<> FGLIVELINKRECEIVER_API UClass* StaticClass<UJSONLiveLinkSourceFactory>()
{
	return UJSONLiveLinkSourceFactory::StaticClass();
}
UJSONLiveLinkSourceFactory::UJSONLiveLinkSourceFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UJSONLiveLinkSourceFactory);
UJSONLiveLinkSourceFactory::~UJSONLiveLinkSourceFactory() {}
// End Class UJSONLiveLinkSourceFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_FgLiveLinkReceiver_Source_FgLiveLinkReceiver_Private_JSONLiveLinkSourceFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UJSONLiveLinkSourceFactory, UJSONLiveLinkSourceFactory::StaticClass, TEXT("UJSONLiveLinkSourceFactory"), &Z_Registration_Info_UClass_UJSONLiveLinkSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJSONLiveLinkSourceFactory), 4109846115U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FgLiveLinkReceiver_Source_FgLiveLinkReceiver_Private_JSONLiveLinkSourceFactory_h_2556616752(TEXT("/Script/FgLiveLinkReceiver"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_FgLiveLinkReceiver_Source_FgLiveLinkReceiver_Private_JSONLiveLinkSourceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_FgLiveLinkReceiver_Source_FgLiveLinkReceiver_Private_JSONLiveLinkSourceFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
