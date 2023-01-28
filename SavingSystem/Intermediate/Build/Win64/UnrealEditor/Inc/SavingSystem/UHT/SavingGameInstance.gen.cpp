// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SavingSystem/Public/SavingGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSavingGameInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	SAVINGSYSTEM_API UClass* Z_Construct_UClass_USavingGameInstance();
	SAVINGSYSTEM_API UClass* Z_Construct_UClass_USavingGameInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SavingSystem();
// End Cross Module References
	void USavingGameInstance::StaticRegisterNativesUSavingGameInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USavingGameInstance);
	UClass* Z_Construct_UClass_USavingGameInstance_NoRegister()
	{
		return USavingGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_USavingGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USavingGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_SavingSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavingGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SavingGameInstance.h" },
		{ "ModuleRelativePath", "Public/SavingGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USavingGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USavingGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USavingGameInstance_Statics::ClassParams = {
		&USavingGameInstance::StaticClass,
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
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USavingGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USavingGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USavingGameInstance()
	{
		if (!Z_Registration_Info_UClass_USavingGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USavingGameInstance.OuterSingleton, Z_Construct_UClass_USavingGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USavingGameInstance.OuterSingleton;
	}
	template<> SAVINGSYSTEM_API UClass* StaticClass<USavingGameInstance>()
	{
		return USavingGameInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USavingGameInstance);
	USavingGameInstance::~USavingGameInstance() {}
	struct Z_CompiledInDeferFile_FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SavingGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SavingGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USavingGameInstance, USavingGameInstance::StaticClass, TEXT("USavingGameInstance"), &Z_Registration_Info_UClass_USavingGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USavingGameInstance), 2243819131U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SavingGameInstance_h_3450033502(TEXT("/Script/SavingSystem"),
		Z_CompiledInDeferFile_FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SavingGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SavingGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
