// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FgLiveLinkReceiver/Public/FgBlueprintFuncs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFgBlueprintFuncs() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
FGLIVELINKRECEIVER_API UClass* Z_Construct_UClass_UFgLiveLinkReciverBPLibrary();
FGLIVELINKRECEIVER_API UClass* Z_Construct_UClass_UFgLiveLinkReciverBPLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_FgLiveLinkReceiver();
// End Cross Module References

// Begin Class UFgLiveLinkReciverBPLibrary Function FgInitReceiver
struct Z_Construct_UFunction_UFgLiveLinkReciverBPLibrary_FgInitReceiver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FaceGood" },
		{ "DisplayName", "FACEGOODLiveLinkSourceStart" },
		{ "Keywords", "FgLiveLinkReceiver" },
		{ "ModuleRelativePath", "Public/FgBlueprintFuncs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFgLiveLinkReciverBPLibrary_FgInitReceiver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFgLiveLinkReciverBPLibrary, nullptr, "FgInitReceiver", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFgLiveLinkReciverBPLibrary_FgInitReceiver_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFgLiveLinkReciverBPLibrary_FgInitReceiver_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFgLiveLinkReciverBPLibrary_FgInitReceiver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFgLiveLinkReciverBPLibrary_FgInitReceiver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFgLiveLinkReciverBPLibrary::execFgInitReceiver)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UFgLiveLinkReciverBPLibrary::FgInitReceiver();
	P_NATIVE_END;
}
// End Class UFgLiveLinkReciverBPLibrary Function FgInitReceiver

// Begin Class UFgLiveLinkReciverBPLibrary Function FgStopReceiver
struct Z_Construct_UFunction_UFgLiveLinkReciverBPLibrary_FgStopReceiver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FaceGood" },
		{ "DisplayName", "FACEGOODLiveLinkSourceStop" },
		{ "Keywords", "FgLiveLinkReceiver" },
		{ "ModuleRelativePath", "Public/FgBlueprintFuncs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFgLiveLinkReciverBPLibrary_FgStopReceiver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFgLiveLinkReciverBPLibrary, nullptr, "FgStopReceiver", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFgLiveLinkReciverBPLibrary_FgStopReceiver_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFgLiveLinkReciverBPLibrary_FgStopReceiver_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFgLiveLinkReciverBPLibrary_FgStopReceiver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFgLiveLinkReciverBPLibrary_FgStopReceiver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFgLiveLinkReciverBPLibrary::execFgStopReceiver)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UFgLiveLinkReciverBPLibrary::FgStopReceiver();
	P_NATIVE_END;
}
// End Class UFgLiveLinkReciverBPLibrary Function FgStopReceiver

// Begin Class UFgLiveLinkReciverBPLibrary
void UFgLiveLinkReciverBPLibrary::StaticRegisterNativesUFgLiveLinkReciverBPLibrary()
{
	UClass* Class = UFgLiveLinkReciverBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FgInitReceiver", &UFgLiveLinkReciverBPLibrary::execFgInitReceiver },
		{ "FgStopReceiver", &UFgLiveLinkReciverBPLibrary::execFgStopReceiver },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFgLiveLinkReciverBPLibrary);
UClass* Z_Construct_UClass_UFgLiveLinkReciverBPLibrary_NoRegister()
{
	return UFgLiveLinkReciverBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UFgLiveLinkReciverBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FgBlueprintFuncs.h" },
		{ "ModuleRelativePath", "Public/FgBlueprintFuncs.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFgLiveLinkReciverBPLibrary_FgInitReceiver, "FgInitReceiver" }, // 2331225885
		{ &Z_Construct_UFunction_UFgLiveLinkReciverBPLibrary_FgStopReceiver, "FgStopReceiver" }, // 2268871083
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFgLiveLinkReciverBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFgLiveLinkReciverBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_FgLiveLinkReceiver,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFgLiveLinkReciverBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFgLiveLinkReciverBPLibrary_Statics::ClassParams = {
	&UFgLiveLinkReciverBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFgLiveLinkReciverBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UFgLiveLinkReciverBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFgLiveLinkReciverBPLibrary()
{
	if (!Z_Registration_Info_UClass_UFgLiveLinkReciverBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFgLiveLinkReciverBPLibrary.OuterSingleton, Z_Construct_UClass_UFgLiveLinkReciverBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFgLiveLinkReciverBPLibrary.OuterSingleton;
}
template<> FGLIVELINKRECEIVER_API UClass* StaticClass<UFgLiveLinkReciverBPLibrary>()
{
	return UFgLiveLinkReciverBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFgLiveLinkReciverBPLibrary);
UFgLiveLinkReciverBPLibrary::~UFgLiveLinkReciverBPLibrary() {}
// End Class UFgLiveLinkReciverBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_FGUEPROJECT_Plugins_FgLiveLinkReceiver_Source_FgLiveLinkReceiver_Public_FgBlueprintFuncs_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFgLiveLinkReciverBPLibrary, UFgLiveLinkReciverBPLibrary::StaticClass, TEXT("UFgLiveLinkReciverBPLibrary"), &Z_Registration_Info_UClass_UFgLiveLinkReciverBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFgLiveLinkReciverBPLibrary), 3162572320U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FGUEPROJECT_Plugins_FgLiveLinkReceiver_Source_FgLiveLinkReceiver_Public_FgBlueprintFuncs_h_1464969095(TEXT("/Script/FgLiveLinkReceiver"),
	Z_CompiledInDeferFile_FID_FGUEPROJECT_Plugins_FgLiveLinkReceiver_Source_FgLiveLinkReceiver_Public_FgBlueprintFuncs_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FGUEPROJECT_Plugins_FgLiveLinkReceiver_Source_FgLiveLinkReceiver_Public_FgBlueprintFuncs_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
