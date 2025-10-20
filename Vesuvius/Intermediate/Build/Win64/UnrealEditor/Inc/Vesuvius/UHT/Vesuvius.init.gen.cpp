// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVesuvius_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Vesuvius;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Vesuvius()
	{
		if (!Z_Registration_Info_UPackage__Script_Vesuvius.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Vesuvius",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x98DA9893,
				0x44659D8B,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Vesuvius.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Vesuvius.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Vesuvius(Z_Construct_UPackage__Script_Vesuvius, TEXT("/Script/Vesuvius"), Z_Registration_Info_UPackage__Script_Vesuvius, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x98DA9893, 0x44659D8B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
