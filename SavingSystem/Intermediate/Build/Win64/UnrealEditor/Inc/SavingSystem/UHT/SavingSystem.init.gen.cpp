// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSavingSystem_init() {}
	SAVINGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_SavingSystem_OnSaveSlotDeleted__DelegateSignature();
	SAVINGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_SavingSystem_OnSaveSlotSelected__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SavingSystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SavingSystem()
	{
		if (!Z_Registration_Info_UPackage__Script_SavingSystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SavingSystem_OnSaveSlotDeleted__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SavingSystem_OnSaveSlotSelected__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SavingSystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xA2CFCCD8,
				0xAF27ABB1,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SavingSystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SavingSystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SavingSystem(Z_Construct_UPackage__Script_SavingSystem, TEXT("/Script/SavingSystem"), Z_Registration_Info_UPackage__Script_SavingSystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA2CFCCD8, 0xAF27ABB1));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
