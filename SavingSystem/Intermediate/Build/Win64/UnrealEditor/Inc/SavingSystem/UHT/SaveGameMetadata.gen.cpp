// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SavingSystem/Public/SaveGameMetadata.h"
#include "SavingSystem/Public/SaveMetadata.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGameMetadata() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	SAVINGSYSTEM_API UClass* Z_Construct_UClass_USaveGameMetadata();
	SAVINGSYSTEM_API UClass* Z_Construct_UClass_USaveGameMetadata_NoRegister();
	SAVINGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSaveMetadata();
	UPackage* Z_Construct_UPackage__Script_SavingSystem();
// End Cross Module References
	void USaveGameMetadata::StaticRegisterNativesUSaveGameMetadata()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveGameMetadata);
	UClass* Z_Construct_UClass_USaveGameMetadata_NoRegister()
	{
		return USaveGameMetadata::StaticClass();
	}
	struct Z_Construct_UClass_USaveGameMetadata_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SavedGamesMetadata_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SavedGamesMetadata_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavedGamesMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SavedGamesMetadata;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveGameMetadata_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_SavingSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameMetadata_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SaveGameMetadata.h" },
		{ "ModuleRelativePath", "Public/SaveGameMetadata.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveGameMetadata_Statics::NewProp_SavedGamesMetadata_ValueProp = { "SavedGamesMetadata", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FSaveMetadata, METADATA_PARAMS(nullptr, 0) }; // 4110609673
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USaveGameMetadata_Statics::NewProp_SavedGamesMetadata_Key_KeyProp = { "SavedGamesMetadata_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameMetadata_Statics::NewProp_SavedGamesMetadata_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/SaveGameMetadata.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USaveGameMetadata_Statics::NewProp_SavedGamesMetadata = { "SavedGamesMetadata", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USaveGameMetadata, SavedGamesMetadata), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaveGameMetadata_Statics::NewProp_SavedGamesMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameMetadata_Statics::NewProp_SavedGamesMetadata_MetaData)) }; // 4110609673
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveGameMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameMetadata_Statics::NewProp_SavedGamesMetadata_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameMetadata_Statics::NewProp_SavedGamesMetadata_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameMetadata_Statics::NewProp_SavedGamesMetadata,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveGameMetadata_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveGameMetadata>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveGameMetadata_Statics::ClassParams = {
		&USaveGameMetadata::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USaveGameMetadata_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameMetadata_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveGameMetadata_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameMetadata_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveGameMetadata()
	{
		if (!Z_Registration_Info_UClass_USaveGameMetadata.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveGameMetadata.OuterSingleton, Z_Construct_UClass_USaveGameMetadata_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USaveGameMetadata.OuterSingleton;
	}
	template<> SAVINGSYSTEM_API UClass* StaticClass<USaveGameMetadata>()
	{
		return USaveGameMetadata::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGameMetadata);
	USaveGameMetadata::~USaveGameMetadata() {}
	struct Z_CompiledInDeferFile_FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveGameMetadata_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveGameMetadata_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USaveGameMetadata, USaveGameMetadata::StaticClass, TEXT("USaveGameMetadata"), &Z_Registration_Info_UClass_USaveGameMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveGameMetadata), 736079244U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveGameMetadata_h_3651101075(TEXT("/Script/SavingSystem"),
		Z_CompiledInDeferFile_FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveGameMetadata_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveGameMetadata_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
