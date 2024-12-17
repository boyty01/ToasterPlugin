// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystem/ToasterSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
#ifdef TOASTERPLUGIN_ToasterSubsystem_generated_h
#error "ToasterSubsystem.generated.h already included, missing '#pragma once' in ToasterSubsystem.h"
#endif
#define TOASTERPLUGIN_ToasterSubsystem_generated_h

#define FID_SourceControl_CatalystDepot_WarOfBeing_Plugins_ToasterPlugin_Source_ToasterPlugin_Public_Subsystem_ToasterSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetToastNotificationWidget); \
	DECLARE_FUNCTION(execRegisterToastNotificationWidget);


#define FID_SourceControl_CatalystDepot_WarOfBeing_Plugins_ToasterPlugin_Source_ToasterPlugin_Public_Subsystem_ToasterSubsystem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUToasterSubsystem(); \
	friend struct Z_Construct_UClass_UToasterSubsystem_Statics; \
public: \
	DECLARE_CLASS(UToasterSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ToasterPlugin"), NO_API) \
	DECLARE_SERIALIZER(UToasterSubsystem)


#define FID_SourceControl_CatalystDepot_WarOfBeing_Plugins_ToasterPlugin_Source_ToasterPlugin_Public_Subsystem_ToasterSubsystem_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UToasterSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UToasterSubsystem(UToasterSubsystem&&); \
	UToasterSubsystem(const UToasterSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UToasterSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToasterSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UToasterSubsystem) \
	NO_API virtual ~UToasterSubsystem();


#define FID_SourceControl_CatalystDepot_WarOfBeing_Plugins_ToasterPlugin_Source_ToasterPlugin_Public_Subsystem_ToasterSubsystem_h_12_PROLOG
#define FID_SourceControl_CatalystDepot_WarOfBeing_Plugins_ToasterPlugin_Source_ToasterPlugin_Public_Subsystem_ToasterSubsystem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SourceControl_CatalystDepot_WarOfBeing_Plugins_ToasterPlugin_Source_ToasterPlugin_Public_Subsystem_ToasterSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SourceControl_CatalystDepot_WarOfBeing_Plugins_ToasterPlugin_Source_ToasterPlugin_Public_Subsystem_ToasterSubsystem_h_15_INCLASS_NO_PURE_DECLS \
	FID_SourceControl_CatalystDepot_WarOfBeing_Plugins_ToasterPlugin_Source_ToasterPlugin_Public_Subsystem_ToasterSubsystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOASTERPLUGIN_API UClass* StaticClass<class UToasterSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SourceControl_CatalystDepot_WarOfBeing_Plugins_ToasterPlugin_Source_ToasterPlugin_Public_Subsystem_ToasterSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
