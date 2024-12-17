// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToasterPlugin_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ToasterPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ToasterPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_ToasterPlugin.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ToasterPlugin",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x351C2888,
				0xE57E4242,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ToasterPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ToasterPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ToasterPlugin(Z_Construct_UPackage__Script_ToasterPlugin, TEXT("/Script/ToasterPlugin"), Z_Registration_Info_UPackage__Script_ToasterPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x351C2888, 0xE57E4242));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
