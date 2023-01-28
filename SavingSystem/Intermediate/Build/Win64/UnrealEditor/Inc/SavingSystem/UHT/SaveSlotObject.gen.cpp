// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SavingSystem/Public/SaveSlotObject.h"
#include "SavingSystem/Public/SaveMetadata.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveSlotObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SAVINGSYSTEM_API UClass* Z_Construct_UClass_USaveSlotObject();
	SAVINGSYSTEM_API UClass* Z_Construct_UClass_USaveSlotObject_NoRegister();
	SAVINGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_SavingSystem_OnSaveSlotDeleted__DelegateSignature();
	SAVINGSYSTEM_API UFunction* Z_Construct_UDelegateFunction_SavingSystem_OnSaveSlotSelected__DelegateSignature();
	SAVINGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSaveMetadata();
	UPackage* Z_Construct_UPackage__Script_SavingSystem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SavingSystem_OnSaveSlotDeleted__DelegateSignature_Statics
	{
		struct _Script_SavingSystem_eventOnSaveSlotDeleted_Parms
		{
			USaveSlotObject* Slot;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Slot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SavingSystem_OnSaveSlotDeleted__DelegateSignature_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SavingSystem_eventOnSaveSlotDeleted_Parms, Slot), Z_Construct_UClass_USaveSlotObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SavingSystem_OnSaveSlotDeleted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SavingSystem_OnSaveSlotDeleted__DelegateSignature_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SavingSystem_OnSaveSlotDeleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveSlotObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SavingSystem_OnSaveSlotDeleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SavingSystem, nullptr, "OnSaveSlotDeleted__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SavingSystem_OnSaveSlotDeleted__DelegateSignature_Statics::_Script_SavingSystem_eventOnSaveSlotDeleted_Parms), Z_Construct_UDelegateFunction_SavingSystem_OnSaveSlotDeleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SavingSystem_OnSaveSlotDeleted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SavingSystem_OnSaveSlotDeleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SavingSystem_OnSaveSlotDeleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SavingSystem_OnSaveSlotDeleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SavingSystem_OnSaveSlotDeleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SavingSystem_OnSaveSlotSelected__DelegateSignature_Statics
	{
		struct _Script_SavingSystem_eventOnSaveSlotSelected_Parms
		{
			USaveSlotObject* Slot;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Slot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_SavingSystem_OnSaveSlotSelected__DelegateSignature_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_SavingSystem_eventOnSaveSlotSelected_Parms, Slot), Z_Construct_UClass_USaveSlotObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SavingSystem_OnSaveSlotSelected__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SavingSystem_OnSaveSlotSelected__DelegateSignature_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SavingSystem_OnSaveSlotSelected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveSlotObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SavingSystem_OnSaveSlotSelected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SavingSystem, nullptr, "OnSaveSlotSelected__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_SavingSystem_OnSaveSlotSelected__DelegateSignature_Statics::_Script_SavingSystem_eventOnSaveSlotSelected_Parms), Z_Construct_UDelegateFunction_SavingSystem_OnSaveSlotSelected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SavingSystem_OnSaveSlotSelected__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SavingSystem_OnSaveSlotSelected__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SavingSystem_OnSaveSlotSelected__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SavingSystem_OnSaveSlotSelected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SavingSystem_OnSaveSlotSelected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void USaveSlotObject::StaticRegisterNativesUSaveSlotObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveSlotObject);
	UClass* Z_Construct_UClass_USaveSlotObject_NoRegister()
	{
		return USaveSlotObject::StaticClass();
	}
	struct Z_Construct_UClass_USaveSlotObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSaveSlotDeleted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSaveSlotDeleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSaveSlotSelected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSaveSlotSelected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SaveMetadata;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveSlotObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SavingSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveSlotObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SaveSlotObject.h" },
		{ "ModuleRelativePath", "Public/SaveSlotObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveSlotObject_Statics::NewProp_OnSaveSlotDeleted_MetaData[] = {
		{ "Category", "Slot Object" },
		{ "ModuleRelativePath", "Public/SaveSlotObject.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USaveSlotObject_Statics::NewProp_OnSaveSlotDeleted = { "OnSaveSlotDeleted", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USaveSlotObject, OnSaveSlotDeleted), Z_Construct_UDelegateFunction_SavingSystem_OnSaveSlotDeleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USaveSlotObject_Statics::NewProp_OnSaveSlotDeleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveSlotObject_Statics::NewProp_OnSaveSlotDeleted_MetaData)) }; // 1722112256
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveSlotObject_Statics::NewProp_OnSaveSlotSelected_MetaData[] = {
		{ "Category", "Slot Object" },
		{ "ModuleRelativePath", "Public/SaveSlotObject.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USaveSlotObject_Statics::NewProp_OnSaveSlotSelected = { "OnSaveSlotSelected", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USaveSlotObject, OnSaveSlotSelected), Z_Construct_UDelegateFunction_SavingSystem_OnSaveSlotSelected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USaveSlotObject_Statics::NewProp_OnSaveSlotSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveSlotObject_Statics::NewProp_OnSaveSlotSelected_MetaData)) }; // 2287756666
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveSlotObject_Statics::NewProp_SaveMetadata_MetaData[] = {
		{ "Category", "Slot Object" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/SaveSlotObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveSlotObject_Statics::NewProp_SaveMetadata = { "SaveMetadata", nullptr, (EPropertyFlags)0x0011000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USaveSlotObject, SaveMetadata), Z_Construct_UScriptStruct_FSaveMetadata, METADATA_PARAMS(Z_Construct_UClass_USaveSlotObject_Statics::NewProp_SaveMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveSlotObject_Statics::NewProp_SaveMetadata_MetaData)) }; // 4110609673
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveSlotObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSlotObject_Statics::NewProp_OnSaveSlotDeleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSlotObject_Statics::NewProp_OnSaveSlotSelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSlotObject_Statics::NewProp_SaveMetadata,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveSlotObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveSlotObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveSlotObject_Statics::ClassParams = {
		&USaveSlotObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USaveSlotObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveSlotObject_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveSlotObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveSlotObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveSlotObject()
	{
		if (!Z_Registration_Info_UClass_USaveSlotObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveSlotObject.OuterSingleton, Z_Construct_UClass_USaveSlotObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USaveSlotObject.OuterSingleton;
	}
	template<> SAVINGSYSTEM_API UClass* StaticClass<USaveSlotObject>()
	{
		return USaveSlotObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveSlotObject);
	USaveSlotObject::~USaveSlotObject() {}
	struct Z_CompiledInDeferFile_FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveSlotObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveSlotObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USaveSlotObject, USaveSlotObject::StaticClass, TEXT("USaveSlotObject"), &Z_Registration_Info_UClass_USaveSlotObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveSlotObject), 3360509883U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveSlotObject_h_2071929025(TEXT("/Script/SavingSystem"),
		Z_CompiledInDeferFile_FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveSlotObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveSlotObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
