// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "JSONLiveLinkSourceFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FGLIVELINKRECEIVER_JSONLiveLinkSourceFactory_generated_h
#error "JSONLiveLinkSourceFactory.generated.h already included, missing '#pragma once' in JSONLiveLinkSourceFactory.h"
#endif
#define FGLIVELINKRECEIVER_JSONLiveLinkSourceFactory_generated_h

#define FID_HostProject_Plugins_FgLiveLinkReceiver_Source_FgLiveLinkReceiver_Private_JSONLiveLinkSourceFactory_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJSONLiveLinkSourceFactory(); \
	friend struct Z_Construct_UClass_UJSONLiveLinkSourceFactory_Statics; \
public: \
	DECLARE_CLASS(UJSONLiveLinkSourceFactory, ULiveLinkSourceFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FgLiveLinkReceiver"), NO_API) \
	DECLARE_SERIALIZER(UJSONLiveLinkSourceFactory)


#define FID_HostProject_Plugins_FgLiveLinkReceiver_Source_FgLiveLinkReceiver_Private_JSONLiveLinkSourceFactory_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJSONLiveLinkSourceFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UJSONLiveLinkSourceFactory(UJSONLiveLinkSourceFactory&&); \
	UJSONLiveLinkSourceFactory(const UJSONLiveLinkSourceFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJSONLiveLinkSourceFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJSONLiveLinkSourceFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJSONLiveLinkSourceFactory) \
	NO_API virtual ~UJSONLiveLinkSourceFactory();


#define FID_HostProject_Plugins_FgLiveLinkReceiver_Source_FgLiveLinkReceiver_Private_JSONLiveLinkSourceFactory_h_11_PROLOG
#define FID_HostProject_Plugins_FgLiveLinkReceiver_Source_FgLiveLinkReceiver_Private_JSONLiveLinkSourceFactory_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_FgLiveLinkReceiver_Source_FgLiveLinkReceiver_Private_JSONLiveLinkSourceFactory_h_16_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_FgLiveLinkReceiver_Source_FgLiveLinkReceiver_Private_JSONLiveLinkSourceFactory_h_16_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FGLIVELINKRECEIVER_API UClass* StaticClass<class UJSONLiveLinkSourceFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_FgLiveLinkReceiver_Source_FgLiveLinkReceiver_Private_JSONLiveLinkSourceFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
