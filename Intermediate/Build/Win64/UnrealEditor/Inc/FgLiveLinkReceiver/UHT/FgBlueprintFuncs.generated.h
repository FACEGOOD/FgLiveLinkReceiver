// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FgBlueprintFuncs.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FGLIVELINKRECEIVER_FgBlueprintFuncs_generated_h
#error "FgBlueprintFuncs.generated.h already included, missing '#pragma once' in FgBlueprintFuncs.h"
#endif
#define FGLIVELINKRECEIVER_FgBlueprintFuncs_generated_h

#define FID_FGUEPROJECT_Plugins_FgLiveLinkReceiver_Source_FgLiveLinkReceiver_Public_FgBlueprintFuncs_h_14_RPC_WRAPPERS \
	DECLARE_FUNCTION(execFgStopReceiver); \
	DECLARE_FUNCTION(execFgInitReceiver);


#define FID_FGUEPROJECT_Plugins_FgLiveLinkReceiver_Source_FgLiveLinkReceiver_Public_FgBlueprintFuncs_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUFgLiveLinkReciverBPLibrary(); \
	friend struct Z_Construct_UClass_UFgLiveLinkReciverBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UFgLiveLinkReciverBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FgLiveLinkReceiver"), NO_API) \
	DECLARE_SERIALIZER(UFgLiveLinkReciverBPLibrary)


#define FID_FGUEPROJECT_Plugins_FgLiveLinkReceiver_Source_FgLiveLinkReceiver_Public_FgBlueprintFuncs_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFgLiveLinkReciverBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFgLiveLinkReciverBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFgLiveLinkReciverBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFgLiveLinkReciverBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFgLiveLinkReciverBPLibrary(UFgLiveLinkReciverBPLibrary&&); \
	UFgLiveLinkReciverBPLibrary(const UFgLiveLinkReciverBPLibrary&); \
public: \
	NO_API virtual ~UFgLiveLinkReciverBPLibrary();


#define FID_FGUEPROJECT_Plugins_FgLiveLinkReceiver_Source_FgLiveLinkReceiver_Public_FgBlueprintFuncs_h_11_PROLOG
#define FID_FGUEPROJECT_Plugins_FgLiveLinkReceiver_Source_FgLiveLinkReceiver_Public_FgBlueprintFuncs_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FGUEPROJECT_Plugins_FgLiveLinkReceiver_Source_FgLiveLinkReceiver_Public_FgBlueprintFuncs_h_14_RPC_WRAPPERS \
	FID_FGUEPROJECT_Plugins_FgLiveLinkReceiver_Source_FgLiveLinkReceiver_Public_FgBlueprintFuncs_h_14_INCLASS \
	FID_FGUEPROJECT_Plugins_FgLiveLinkReceiver_Source_FgLiveLinkReceiver_Public_FgBlueprintFuncs_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FGLIVELINKRECEIVER_API UClass* StaticClass<class UFgLiveLinkReciverBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FGUEPROJECT_Plugins_FgLiveLinkReceiver_Source_FgLiveLinkReceiver_Public_FgBlueprintFuncs_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
