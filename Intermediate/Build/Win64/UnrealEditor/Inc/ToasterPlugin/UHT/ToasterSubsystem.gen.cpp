// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToasterPlugin/Public/Subsystem/ToasterSubsystem.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToasterSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
TOASTERPLUGIN_API UClass* Z_Construct_UClass_UToasterSubsystem();
TOASTERPLUGIN_API UClass* Z_Construct_UClass_UToasterSubsystem_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToasterPlugin();
// End Cross Module References

// Begin Class UToasterSubsystem Function GetToastNotificationWidget
struct Z_Construct_UFunction_UToasterSubsystem_GetToastNotificationWidget_Statics
{
	struct ToasterSubsystem_eventGetToastNotificationWidget_Parms
	{
		UUserWidget* OutToaster;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Toaster" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Get existing toast notification widget, if it exists.\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystem/ToasterSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get existing toast notification widget, if it exists." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutToaster_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutToaster;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToasterSubsystem_GetToastNotificationWidget_Statics::NewProp_OutToaster = { "OutToaster", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToasterSubsystem_eventGetToastNotificationWidget_Parms, OutToaster), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutToaster_MetaData), NewProp_OutToaster_MetaData) };
void Z_Construct_UFunction_UToasterSubsystem_GetToastNotificationWidget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ToasterSubsystem_eventGetToastNotificationWidget_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UToasterSubsystem_GetToastNotificationWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ToasterSubsystem_eventGetToastNotificationWidget_Parms), &Z_Construct_UFunction_UToasterSubsystem_GetToastNotificationWidget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToasterSubsystem_GetToastNotificationWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToasterSubsystem_GetToastNotificationWidget_Statics::NewProp_OutToaster,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToasterSubsystem_GetToastNotificationWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToasterSubsystem_GetToastNotificationWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToasterSubsystem_GetToastNotificationWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToasterSubsystem, nullptr, "GetToastNotificationWidget", nullptr, nullptr, Z_Construct_UFunction_UToasterSubsystem_GetToastNotificationWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToasterSubsystem_GetToastNotificationWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToasterSubsystem_GetToastNotificationWidget_Statics::ToasterSubsystem_eventGetToastNotificationWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToasterSubsystem_GetToastNotificationWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToasterSubsystem_GetToastNotificationWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToasterSubsystem_GetToastNotificationWidget_Statics::ToasterSubsystem_eventGetToastNotificationWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToasterSubsystem_GetToastNotificationWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToasterSubsystem_GetToastNotificationWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToasterSubsystem::execGetToastNotificationWidget)
{
	P_GET_OBJECT_REF(UUserWidget,Z_Param_Out_OutToaster);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetToastNotificationWidget(P_ARG_GC_BARRIER(Z_Param_Out_OutToaster));
	P_NATIVE_END;
}
// End Class UToasterSubsystem Function GetToastNotificationWidget

// Begin Class UToasterSubsystem Function RegisterToastNotificationWidget
struct Z_Construct_UFunction_UToasterSubsystem_RegisterToastNotificationWidget_Statics
{
	struct ToasterSubsystem_eventRegisterToastNotificationWidget_Parms
	{
		UUserWidget* WidgetToRegister;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Toaster" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Register a widget as the toast notification widget\n" },
#endif
		{ "ModuleRelativePath", "Public/Subsystem/ToasterSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Register a widget as the toast notification widget" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetToRegister_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetToRegister;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToasterSubsystem_RegisterToastNotificationWidget_Statics::NewProp_WidgetToRegister = { "WidgetToRegister", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ToasterSubsystem_eventRegisterToastNotificationWidget_Parms, WidgetToRegister), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetToRegister_MetaData), NewProp_WidgetToRegister_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToasterSubsystem_RegisterToastNotificationWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToasterSubsystem_RegisterToastNotificationWidget_Statics::NewProp_WidgetToRegister,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UToasterSubsystem_RegisterToastNotificationWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToasterSubsystem_RegisterToastNotificationWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToasterSubsystem, nullptr, "RegisterToastNotificationWidget", nullptr, nullptr, Z_Construct_UFunction_UToasterSubsystem_RegisterToastNotificationWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToasterSubsystem_RegisterToastNotificationWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UToasterSubsystem_RegisterToastNotificationWidget_Statics::ToasterSubsystem_eventRegisterToastNotificationWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UToasterSubsystem_RegisterToastNotificationWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UToasterSubsystem_RegisterToastNotificationWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UToasterSubsystem_RegisterToastNotificationWidget_Statics::ToasterSubsystem_eventRegisterToastNotificationWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UToasterSubsystem_RegisterToastNotificationWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToasterSubsystem_RegisterToastNotificationWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UToasterSubsystem::execRegisterToastNotificationWidget)
{
	P_GET_OBJECT(UUserWidget,Z_Param_WidgetToRegister);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterToastNotificationWidget(Z_Param_WidgetToRegister);
	P_NATIVE_END;
}
// End Class UToasterSubsystem Function RegisterToastNotificationWidget

// Begin Class UToasterSubsystem
void UToasterSubsystem::StaticRegisterNativesUToasterSubsystem()
{
	UClass* Class = UToasterSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetToastNotificationWidget", &UToasterSubsystem::execGetToastNotificationWidget },
		{ "RegisterToastNotificationWidget", &UToasterSubsystem::execRegisterToastNotificationWidget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToasterSubsystem);
UClass* Z_Construct_UClass_UToasterSubsystem_NoRegister()
{
	return UToasterSubsystem::StaticClass();
}
struct Z_Construct_UClass_UToasterSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Subsystem/ToasterSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystem/ToasterSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UToasterSubsystem_GetToastNotificationWidget, "GetToastNotificationWidget" }, // 1451204079
		{ &Z_Construct_UFunction_UToasterSubsystem_RegisterToastNotificationWidget, "RegisterToastNotificationWidget" }, // 3238278299
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToasterSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UToasterSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_ToasterPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToasterSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UToasterSubsystem_Statics::ClassParams = {
	&UToasterSubsystem::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UToasterSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UToasterSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UToasterSubsystem()
{
	if (!Z_Registration_Info_UClass_UToasterSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToasterSubsystem.OuterSingleton, Z_Construct_UClass_UToasterSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UToasterSubsystem.OuterSingleton;
}
template<> TOASTERPLUGIN_API UClass* StaticClass<UToasterSubsystem>()
{
	return UToasterSubsystem::StaticClass();
}
UToasterSubsystem::UToasterSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UToasterSubsystem);
UToasterSubsystem::~UToasterSubsystem() {}
// End Class UToasterSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_SourceControl_CatalystDepot_WarOfBeing_Plugins_ToasterPlugin_Source_ToasterPlugin_Public_Subsystem_ToasterSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UToasterSubsystem, UToasterSubsystem::StaticClass, TEXT("UToasterSubsystem"), &Z_Registration_Info_UClass_UToasterSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToasterSubsystem), 3172229137U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SourceControl_CatalystDepot_WarOfBeing_Plugins_ToasterPlugin_Source_ToasterPlugin_Public_Subsystem_ToasterSubsystem_h_4099849773(TEXT("/Script/ToasterPlugin"),
	Z_CompiledInDeferFile_FID_SourceControl_CatalystDepot_WarOfBeing_Plugins_ToasterPlugin_Source_ToasterPlugin_Public_Subsystem_ToasterSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SourceControl_CatalystDepot_WarOfBeing_Plugins_ToasterPlugin_Source_ToasterPlugin_Public_Subsystem_ToasterSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
