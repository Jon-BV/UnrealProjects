// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRouge_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Rouge;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Rouge()
	{
		if (!Z_Registration_Info_UPackage__Script_Rouge.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Rouge",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xB324B6E8,
				0x01890E18,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Rouge.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Rouge.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Rouge(Z_Construct_UPackage__Script_Rouge, TEXT("/Script/Rouge"), Z_Registration_Info_UPackage__Script_Rouge, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB324B6E8, 0x01890E18));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
