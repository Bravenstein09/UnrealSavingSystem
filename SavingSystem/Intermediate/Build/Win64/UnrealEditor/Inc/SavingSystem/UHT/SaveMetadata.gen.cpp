// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SavingSystem/Public/SaveMetadata.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveMetadata() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	SAVINGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSaveMetadata();
	UPackage* Z_Construct_UPackage__Script_SavingSystem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SaveMetadata;
class UScriptStruct* FSaveMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SaveMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SaveMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSaveMetadata, Z_Construct_UPackage__Script_SavingSystem(), TEXT("SaveMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_SaveMetadata.OuterSingleton;
}
template<> SAVINGSYSTEM_API UScriptStruct* StaticStruct<FSaveMetadata>()
{
	return FSaveMetadata::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSaveMetadata_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Date_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Date;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveMetadata_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SaveMetadata.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSaveMetadata_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSaveMetadata>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveMetadata_Statics::NewProp_SlotName_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//the name of the slot\n" },
		{ "ModuleRelativePath", "Public/SaveMetadata.h" },
		{ "ToolTip", "the name of the slot" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSaveMetadata_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSaveMetadata, SlotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveMetadata_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveMetadata_Statics::NewProp_SlotName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveMetadata_Statics::NewProp_Date_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//the time that the slot was last saved\n" },
		{ "ModuleRelativePath", "Public/SaveMetadata.h" },
		{ "ToolTip", "the time that the slot was last saved" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSaveMetadata_Statics::NewProp_Date = { "Date", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSaveMetadata, Date), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveMetadata_Statics::NewProp_Date_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveMetadata_Statics::NewProp_Date_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSaveMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveMetadata_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveMetadata_Statics::NewProp_Date,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSaveMetadata_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SavingSystem,
		nullptr,
		&NewStructOps,
		"SaveMetadata",
		sizeof(FSaveMetadata),
		alignof(FSaveMetadata),
		Z_Construct_UScriptStruct_FSaveMetadata_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveMetadata_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveMetadata_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveMetadata_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSaveMetadata()
	{
		if (!Z_Registration_Info_UScriptStruct_SaveMetadata.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SaveMetadata.InnerSingleton, Z_Construct_UScriptStruct_FSaveMetadata_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SaveMetadata.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveMetadata_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveMetadata_h_Statics::ScriptStructInfo[] = {
		{ FSaveMetadata::StaticStruct, Z_Construct_UScriptStruct_FSaveMetadata_Statics::NewStructOps, TEXT("SaveMetadata"), &Z_Registration_Info_UScriptStruct_SaveMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSaveMetadata), 4110609673U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveMetadata_h_1124926291(TEXT("/Script/SavingSystem"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveMetadata_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveMetadata_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
