// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SavingSystem/Public/SaveGameData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGameData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	SAVINGSYSTEM_API UClass* Z_Construct_UClass_USaveGameData();
	SAVINGSYSTEM_API UClass* Z_Construct_UClass_USaveGameData_NoRegister();
	SAVINGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSaveData();
	UPackage* Z_Construct_UPackage__Script_SavingSystem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SaveData;
class UScriptStruct* FSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSaveData, Z_Construct_UPackage__Script_SavingSystem(), TEXT("SaveData"));
	}
	return Z_Registration_Info_UScriptStruct_SaveData.OuterSingleton;
}
template<> SAVINGSYSTEM_API UScriptStruct* StaticStruct<FSaveData>()
{
	return FSaveData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSaveData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveGameData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSaveData>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSaveData_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveData_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "SaveGameData" },
		{ "ModuleRelativePath", "Public/SaveGameData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSaveData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSaveData, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveData_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveData_Statics::NewProp_Data_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSaveData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveData_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveData_Statics::NewProp_Data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SavingSystem,
		nullptr,
		&NewStructOps,
		"SaveData",
		sizeof(FSaveData),
		alignof(FSaveData),
		Z_Construct_UScriptStruct_FSaveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSaveData()
	{
		if (!Z_Registration_Info_UScriptStruct_SaveData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SaveData.InnerSingleton, Z_Construct_UScriptStruct_FSaveData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SaveData.InnerSingleton;
	}
	void USaveGameData::StaticRegisterNativesUSaveGameData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveGameData);
	UClass* Z_Construct_UClass_USaveGameData_NoRegister()
	{
		return USaveGameData::StaticClass();
	}
	struct Z_Construct_UClass_USaveGameData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SerializedData_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SerializedData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SerializedData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SerializedData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveGameData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_SavingSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SaveGameData.h" },
		{ "ModuleRelativePath", "Public/SaveGameData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveGameData_Statics::NewProp_SerializedData_ValueProp = { "SerializedData", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FSaveData, METADATA_PARAMS(nullptr, 0) }; // 1476769598
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USaveGameData_Statics::NewProp_SerializedData_Key_KeyProp = { "SerializedData_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameData_Statics::NewProp_SerializedData_MetaData[] = {
		{ "Category", "SaveGameData" },
		{ "ModuleRelativePath", "Public/SaveGameData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USaveGameData_Statics::NewProp_SerializedData = { "SerializedData", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USaveGameData, SerializedData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaveGameData_Statics::NewProp_SerializedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameData_Statics::NewProp_SerializedData_MetaData)) }; // 1476769598
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveGameData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameData_Statics::NewProp_SerializedData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameData_Statics::NewProp_SerializedData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameData_Statics::NewProp_SerializedData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveGameData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveGameData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveGameData_Statics::ClassParams = {
		&USaveGameData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USaveGameData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveGameData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveGameData()
	{
		if (!Z_Registration_Info_UClass_USaveGameData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveGameData.OuterSingleton, Z_Construct_UClass_USaveGameData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USaveGameData.OuterSingleton;
	}
	template<> SAVINGSYSTEM_API UClass* StaticClass<USaveGameData>()
	{
		return USaveGameData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGameData);
	USaveGameData::~USaveGameData() {}
	struct Z_CompiledInDeferFile_FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveGameData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveGameData_h_Statics::ScriptStructInfo[] = {
		{ FSaveData::StaticStruct, Z_Construct_UScriptStruct_FSaveData_Statics::NewStructOps, TEXT("SaveData"), &Z_Registration_Info_UScriptStruct_SaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSaveData), 1476769598U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveGameData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USaveGameData, USaveGameData::StaticClass, TEXT("USaveGameData"), &Z_Registration_Info_UClass_USaveGameData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveGameData), 2007769390U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveGameData_h_2725663001(TEXT("/Script/SavingSystem"),
		Z_CompiledInDeferFile_FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveGameData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveGameData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveGameData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveGameData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
