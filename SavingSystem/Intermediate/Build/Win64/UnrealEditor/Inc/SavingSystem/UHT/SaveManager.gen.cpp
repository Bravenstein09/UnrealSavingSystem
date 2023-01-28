// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SavingSystem/Public/SaveManager.h"
#include "SavingSystem/Public/SaveMetadata.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SAVINGSYSTEM_API UClass* Z_Construct_UClass_USaveManager();
	SAVINGSYSTEM_API UClass* Z_Construct_UClass_USaveManager_NoRegister();
	SAVINGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSaveMetadata();
	UPackage* Z_Construct_UPackage__Script_SavingSystem();
// End Cross Module References
	DEFINE_FUNCTION(USaveManager::execGetAllSaveMetadata)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSaveMetadata>*)Z_Param__Result=USaveManager::GetAllSaveMetadata();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManager::execGetCurrentSaveSlot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USaveManager::GetCurrentSaveSlot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManager::execSetCurrentSaveSlot)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Slot);
		P_FINISH;
		P_NATIVE_BEGIN;
		USaveManager::SetCurrentSaveSlot(Z_Param_Slot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManager::execGetNewSaveSlot)
	{
		P_GET_UBOOL_REF(Z_Param_Out_SlotFound);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USaveManager::GetNewSaveSlot(Z_Param_Out_SlotFound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManager::execDeleteSaveSlot)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Slot);
		P_FINISH;
		P_NATIVE_BEGIN;
		USaveManager::DeleteSaveSlot(Z_Param_Slot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManager::execLoadGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		USaveManager::LoadGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveManager::execSaveGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		USaveManager::SaveGame();
		P_NATIVE_END;
	}
	void USaveManager::StaticRegisterNativesUSaveManager()
	{
		UClass* Class = USaveManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeleteSaveSlot", &USaveManager::execDeleteSaveSlot },
			{ "GetAllSaveMetadata", &USaveManager::execGetAllSaveMetadata },
			{ "GetCurrentSaveSlot", &USaveManager::execGetCurrentSaveSlot },
			{ "GetNewSaveSlot", &USaveManager::execGetNewSaveSlot },
			{ "LoadGame", &USaveManager::execLoadGame },
			{ "SaveGame", &USaveManager::execSaveGame },
			{ "SetCurrentSaveSlot", &USaveManager::execSetCurrentSaveSlot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USaveManager_DeleteSaveSlot_Statics
	{
		struct SaveManager_eventDeleteSaveSlot_Parms
		{
			FString Slot;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Slot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_DeleteSaveSlot_Statics::NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveManager_DeleteSaveSlot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventDeleteSaveSlot_Parms, Slot), METADATA_PARAMS(Z_Construct_UFunction_USaveManager_DeleteSaveSlot_Statics::NewProp_Slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_DeleteSaveSlot_Statics::NewProp_Slot_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_DeleteSaveSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_DeleteSaveSlot_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_DeleteSaveSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Project Saving and Loading" },
		{ "Comment", "//deletes a saved slot\n" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
		{ "ToolTip", "deletes a saved slot" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_DeleteSaveSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "DeleteSaveSlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_USaveManager_DeleteSaveSlot_Statics::SaveManager_eventDeleteSaveSlot_Parms), Z_Construct_UFunction_USaveManager_DeleteSaveSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_DeleteSaveSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_DeleteSaveSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_DeleteSaveSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveManager_DeleteSaveSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_DeleteSaveSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManager_GetAllSaveMetadata_Statics
	{
		struct SaveManager_eventGetAllSaveMetadata_Parms
		{
			TArray<FSaveMetadata> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveManager_GetAllSaveMetadata_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSaveMetadata, METADATA_PARAMS(nullptr, 0) }; // 4110609673
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveManager_GetAllSaveMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventGetAllSaveMetadata_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 4110609673
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_GetAllSaveMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_GetAllSaveMetadata_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_GetAllSaveMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_GetAllSaveMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "Project Saving and Loading" },
		{ "Comment", "//get every saved game\n" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
		{ "ToolTip", "get every saved game" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_GetAllSaveMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "GetAllSaveMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_USaveManager_GetAllSaveMetadata_Statics::SaveManager_eventGetAllSaveMetadata_Parms), Z_Construct_UFunction_USaveManager_GetAllSaveMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_GetAllSaveMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_GetAllSaveMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_GetAllSaveMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveManager_GetAllSaveMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_GetAllSaveMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManager_GetCurrentSaveSlot_Statics
	{
		struct SaveManager_eventGetCurrentSaveSlot_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveManager_GetCurrentSaveSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventGetCurrentSaveSlot_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_GetCurrentSaveSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_GetCurrentSaveSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_GetCurrentSaveSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Project Saving and Loading" },
		{ "Comment", "//gets the current save slot\n" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
		{ "ToolTip", "gets the current save slot" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_GetCurrentSaveSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "GetCurrentSaveSlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_USaveManager_GetCurrentSaveSlot_Statics::SaveManager_eventGetCurrentSaveSlot_Parms), Z_Construct_UFunction_USaveManager_GetCurrentSaveSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_GetCurrentSaveSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_GetCurrentSaveSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_GetCurrentSaveSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveManager_GetCurrentSaveSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_GetCurrentSaveSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManager_GetNewSaveSlot_Statics
	{
		struct SaveManager_eventGetNewSaveSlot_Parms
		{
			bool SlotFound;
			FString ReturnValue;
		};
		static void NewProp_SlotFound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SlotFound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveManager_GetNewSaveSlot_Statics::NewProp_SlotFound_SetBit(void* Obj)
	{
		((SaveManager_eventGetNewSaveSlot_Parms*)Obj)->SlotFound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveManager_GetNewSaveSlot_Statics::NewProp_SlotFound = { "SlotFound", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SaveManager_eventGetNewSaveSlot_Parms), &Z_Construct_UFunction_USaveManager_GetNewSaveSlot_Statics::NewProp_SlotFound_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_GetNewSaveSlot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Slot" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveManager_GetNewSaveSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventGetNewSaveSlot_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_USaveManager_GetNewSaveSlot_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_GetNewSaveSlot_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_GetNewSaveSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_GetNewSaveSlot_Statics::NewProp_SlotFound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_GetNewSaveSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_GetNewSaveSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Project Saving and Loading" },
		{ "Comment", "//gets an unused save slot\n" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
		{ "ToolTip", "gets an unused save slot" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_GetNewSaveSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "GetNewSaveSlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_USaveManager_GetNewSaveSlot_Statics::SaveManager_eventGetNewSaveSlot_Parms), Z_Construct_UFunction_USaveManager_GetNewSaveSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_GetNewSaveSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_GetNewSaveSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_GetNewSaveSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveManager_GetNewSaveSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_GetNewSaveSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManager_LoadGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_LoadGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Project Saving and Loading" },
		{ "Comment", "//loads a previously saved state of the game\n" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
		{ "ToolTip", "loads a previously saved state of the game" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_LoadGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "LoadGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_LoadGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_LoadGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveManager_LoadGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_LoadGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManager_SaveGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_SaveGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Project Saving and Loading" },
		{ "Comment", "//saves the current state of the game\n" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
		{ "ToolTip", "saves the current state of the game" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_SaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "SaveGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_SaveGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_SaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveManager_SaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_SaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveManager_SetCurrentSaveSlot_Statics
	{
		struct SaveManager_eventSetCurrentSaveSlot_Parms
		{
			FString Slot;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Slot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_SetCurrentSaveSlot_Statics::NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveManager_SetCurrentSaveSlot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveManager_eventSetCurrentSaveSlot_Parms, Slot), METADATA_PARAMS(Z_Construct_UFunction_USaveManager_SetCurrentSaveSlot_Statics::NewProp_Slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_SetCurrentSaveSlot_Statics::NewProp_Slot_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveManager_SetCurrentSaveSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveManager_SetCurrentSaveSlot_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveManager_SetCurrentSaveSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Project Saving and Loading" },
		{ "Comment", "//sets the current save slot to the provided value\n" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
		{ "ToolTip", "sets the current save slot to the provided value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveManager_SetCurrentSaveSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveManager, nullptr, "SetCurrentSaveSlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_USaveManager_SetCurrentSaveSlot_Statics::SaveManager_eventSetCurrentSaveSlot_Parms), Z_Construct_UFunction_USaveManager_SetCurrentSaveSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_SetCurrentSaveSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveManager_SetCurrentSaveSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveManager_SetCurrentSaveSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveManager_SetCurrentSaveSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveManager_SetCurrentSaveSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveManager);
	UClass* Z_Construct_UClass_USaveManager_NoRegister()
	{
		return USaveManager::StaticClass();
	}
	struct Z_Construct_UClass_USaveManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SavingSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USaveManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveManager_DeleteSaveSlot, "DeleteSaveSlot" }, // 1081863750
		{ &Z_Construct_UFunction_USaveManager_GetAllSaveMetadata, "GetAllSaveMetadata" }, // 412796933
		{ &Z_Construct_UFunction_USaveManager_GetCurrentSaveSlot, "GetCurrentSaveSlot" }, // 2053046279
		{ &Z_Construct_UFunction_USaveManager_GetNewSaveSlot, "GetNewSaveSlot" }, // 2733987307
		{ &Z_Construct_UFunction_USaveManager_LoadGame, "LoadGame" }, // 4112167516
		{ &Z_Construct_UFunction_USaveManager_SaveGame, "SaveGame" }, // 1966658150
		{ &Z_Construct_UFunction_USaveManager_SetCurrentSaveSlot, "SetCurrentSaveSlot" }, // 2090534484
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SaveManager.h" },
		{ "ModuleRelativePath", "Public/SaveManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveManager_Statics::ClassParams = {
		&USaveManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USaveManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveManager()
	{
		if (!Z_Registration_Info_UClass_USaveManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveManager.OuterSingleton, Z_Construct_UClass_USaveManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USaveManager.OuterSingleton;
	}
	template<> SAVINGSYSTEM_API UClass* StaticClass<USaveManager>()
	{
		return USaveManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveManager);
	USaveManager::~USaveManager() {}
	struct Z_CompiledInDeferFile_FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USaveManager, USaveManager::StaticClass, TEXT("USaveManager"), &Z_Registration_Info_UClass_USaveManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveManager), 2676630097U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveManager_h_325902891(TEXT("/Script/SavingSystem"),
		Z_CompiledInDeferFile_FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
