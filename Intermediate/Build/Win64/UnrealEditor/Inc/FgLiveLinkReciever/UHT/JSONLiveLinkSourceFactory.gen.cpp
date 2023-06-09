// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FgLiveLinkReciever/Private/JSONLiveLinkSourceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJSONLiveLinkSourceFactory() {}
// Cross Module References
	FGLIVELINKRECIEVER_API UClass* Z_Construct_UClass_UJSONLiveLinkSourceFactory();
	FGLIVELINKRECIEVER_API UClass* Z_Construct_UClass_UJSONLiveLinkSourceFactory_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceFactory();
	UPackage* Z_Construct_UPackage__Script_FgLiveLinkReciever();
// End Cross Module References
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
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJSONLiveLinkSourceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_FgLiveLinkReciever,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJSONLiveLinkSourceFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "JSONLiveLinkSourceFactory.h" },
		{ "ModuleRelativePath", "Private/JSONLiveLinkSourceFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJSONLiveLinkSourceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJSONLiveLinkSourceFactory>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_UJSONLiveLinkSourceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJSONLiveLinkSourceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJSONLiveLinkSourceFactory()
	{
		if (!Z_Registration_Info_UClass_UJSONLiveLinkSourceFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJSONLiveLinkSourceFactory.OuterSingleton, Z_Construct_UClass_UJSONLiveLinkSourceFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UJSONLiveLinkSourceFactory.OuterSingleton;
	}
	template<> FGLIVELINKRECIEVER_API UClass* StaticClass<UJSONLiveLinkSourceFactory>()
	{
		return UJSONLiveLinkSourceFactory::StaticClass();
	}
	UJSONLiveLinkSourceFactory::UJSONLiveLinkSourceFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJSONLiveLinkSourceFactory);
	UJSONLiveLinkSourceFactory::~UJSONLiveLinkSourceFactory() {}
	struct Z_CompiledInDeferFile_FID_FgPlugin52_Plugins_FgLiveLinkReciever_Source_FgLiveLinkReciever_Private_JSONLiveLinkSourceFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FgPlugin52_Plugins_FgLiveLinkReciever_Source_FgLiveLinkReciever_Private_JSONLiveLinkSourceFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UJSONLiveLinkSourceFactory, UJSONLiveLinkSourceFactory::StaticClass, TEXT("UJSONLiveLinkSourceFactory"), &Z_Registration_Info_UClass_UJSONLiveLinkSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJSONLiveLinkSourceFactory), 2501669942U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FgPlugin52_Plugins_FgLiveLinkReciever_Source_FgLiveLinkReciever_Private_JSONLiveLinkSourceFactory_h_1530557886(TEXT("/Script/FgLiveLinkReciever"),
		Z_CompiledInDeferFile_FID_FgPlugin52_Plugins_FgLiveLinkReciever_Source_FgLiveLinkReciever_Private_JSONLiveLinkSourceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FgPlugin52_Plugins_FgLiveLinkReciever_Source_FgLiveLinkReciever_Private_JSONLiveLinkSourceFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
