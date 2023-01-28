// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SavingSystem/Public/SaveInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	SAVINGSYSTEM_API UClass* Z_Construct_UClass_USaveInterface();
	SAVINGSYSTEM_API UClass* Z_Construct_UClass_USaveInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SavingSystem();
// End Cross Module References
	DEFINE_FUNCTION(ISaveInterface::execOnBeforeSave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeforeSave_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISaveInterface::execGetUniqueSaveName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetUniqueSaveName_Implementation();
		P_NATIVE_END;
	}
	struct SaveInterface_eventGetUniqueSaveName_Parms
	{
		FString ReturnValue;
	};
	FString ISaveInterface::GetUniqueSaveName()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetUniqueSaveName instead.");
		SaveInterface_eventGetUniqueSaveName_Parms Parms;
		return Parms.ReturnValue;
	}
	void ISaveInterface::OnBeforeSave()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnBeforeSave instead.");
	}
	void USaveInterface::StaticRegisterNativesUSaveInterface()
	{
		UClass* Class = USaveInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUniqueSaveName", &ISaveInterface::execGetUniqueSaveName },
			{ "OnBeforeSave", &ISaveInterface::execOnBeforeSave },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USaveInterface_GetUniqueSaveName_Statics
	{
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveInterface_GetUniqueSaveName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SaveInterface_eventGetUniqueSaveName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveInterface_GetUniqueSaveName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveInterface_GetUniqueSaveName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveInterface_GetUniqueSaveName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveInterface" },
		{ "Comment", "//gets a unique name to use when saving\n" },
		{ "ModuleRelativePath", "Public/SaveInterface.h" },
		{ "ToolTip", "gets a unique name to use when saving" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveInterface_GetUniqueSaveName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveInterface, nullptr, "GetUniqueSaveName", nullptr, nullptr, sizeof(SaveInterface_eventGetUniqueSaveName_Parms), Z_Construct_UFunction_USaveInterface_GetUniqueSaveName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_GetUniqueSaveName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveInterface_GetUniqueSaveName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_GetUniqueSaveName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveInterface_GetUniqueSaveName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveInterface_GetUniqueSaveName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveInterface_OnBeforeSave_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveInterface_OnBeforeSave_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveInterface" },
		{ "Comment", "//called right before the owning actor is saved.\n//usually used to save last minute variables e.g. player positions\n" },
		{ "ModuleRelativePath", "Public/SaveInterface.h" },
		{ "ToolTip", "called right before the owning actor is saved.\nusually used to save last minute variables e.g. player positions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveInterface_OnBeforeSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveInterface, nullptr, "OnBeforeSave", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveInterface_OnBeforeSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveInterface_OnBeforeSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveInterface_OnBeforeSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveInterface_OnBeforeSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveInterface);
	UClass* Z_Construct_UClass_USaveInterface_NoRegister()
	{
		return USaveInterface::StaticClass();
	}
	struct Z_Construct_UClass_USaveInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_SavingSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USaveInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveInterface_GetUniqueSaveName, "GetUniqueSaveName" }, // 2533338747
		{ &Z_Construct_UFunction_USaveInterface_OnBeforeSave, "OnBeforeSave" }, // 3356223055
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISaveInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveInterface_Statics::ClassParams = {
		&USaveInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_USaveInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveInterface()
	{
		if (!Z_Registration_Info_UClass_USaveInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveInterface.OuterSingleton, Z_Construct_UClass_USaveInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USaveInterface.OuterSingleton;
	}
	template<> SAVINGSYSTEM_API UClass* StaticClass<USaveInterface>()
	{
		return USaveInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveInterface);
	USaveInterface::~USaveInterface() {}
	static FName NAME_USaveInterface_GetUniqueSaveName = FName(TEXT("GetUniqueSaveName"));
	FString ISaveInterface::Execute_GetUniqueSaveName(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USaveInterface::StaticClass()));
		SaveInterface_eventGetUniqueSaveName_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USaveInterface_GetUniqueSaveName);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISaveInterface*)(O->GetNativeInterfaceAddress(USaveInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetUniqueSaveName_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USaveInterface_OnBeforeSave = FName(TEXT("OnBeforeSave"));
	void ISaveInterface::Execute_OnBeforeSave(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USaveInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_USaveInterface_OnBeforeSave);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ISaveInterface*)(O->GetNativeInterfaceAddress(USaveInterface::StaticClass())))
		{
			I->OnBeforeSave_Implementation();
		}
	}
	struct Z_CompiledInDeferFile_FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USaveInterface, USaveInterface::StaticClass, TEXT("USaveInterface"), &Z_Registration_Info_UClass_USaveInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveInterface), 2745915468U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveInterface_h_4151755697(TEXT("/Script/SavingSystem"),
		Z_CompiledInDeferFile_FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
