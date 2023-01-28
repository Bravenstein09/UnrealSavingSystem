// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SaveInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SAVINGSYSTEM_SaveInterface_generated_h
#error "SaveInterface.generated.h already included, missing '#pragma once' in SaveInterface.h"
#endif
#define SAVINGSYSTEM_SaveInterface_generated_h

#define FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveInterface_h_13_SPARSE_DATA
#define FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveInterface_h_13_RPC_WRAPPERS \
	virtual void OnBeforeSave_Implementation() {}; \
	virtual FString GetUniqueSaveName_Implementation() { return TEXT(""); }; \
 \
	DECLARE_FUNCTION(execOnBeforeSave); \
	DECLARE_FUNCTION(execGetUniqueSaveName);


#define FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnBeforeSave_Implementation() {}; \
	virtual FString GetUniqueSaveName_Implementation() { return TEXT(""); }; \
 \
	DECLARE_FUNCTION(execOnBeforeSave); \
	DECLARE_FUNCTION(execGetUniqueSaveName);


#define FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveInterface_h_13_ACCESSORS
#define FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveInterface_h_13_CALLBACK_WRAPPERS
#define FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SAVINGSYSTEM_API USaveInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SAVINGSYSTEM_API, USaveInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SAVINGSYSTEM_API USaveInterface(USaveInterface&&); \
	SAVINGSYSTEM_API USaveInterface(const USaveInterface&); \
public: \
	SAVINGSYSTEM_API virtual ~USaveInterface();


#define FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SAVINGSYSTEM_API USaveInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SAVINGSYSTEM_API USaveInterface(USaveInterface&&); \
	SAVINGSYSTEM_API USaveInterface(const USaveInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SAVINGSYSTEM_API, USaveInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveInterface) \
	SAVINGSYSTEM_API virtual ~USaveInterface();


#define FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSaveInterface(); \
	friend struct Z_Construct_UClass_USaveInterface_Statics; \
public: \
	DECLARE_CLASS(USaveInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SavingSystem"), SAVINGSYSTEM_API) \
	DECLARE_SERIALIZER(USaveInterface)


#define FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISaveInterface() {} \
public: \
	typedef USaveInterface UClassType; \
	typedef ISaveInterface ThisClass; \
	static FString Execute_GetUniqueSaveName(UObject* O); \
	static void Execute_OnBeforeSave(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ISaveInterface() {} \
public: \
	typedef USaveInterface UClassType; \
	typedef ISaveInterface ThisClass; \
	static FString Execute_GetUniqueSaveName(UObject* O); \
	static void Execute_OnBeforeSave(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveInterface_h_10_PROLOG
#define FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveInterface_h_13_SPARSE_DATA \
	FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveInterface_h_13_RPC_WRAPPERS \
	FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveInterface_h_13_ACCESSORS \
	FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveInterface_h_13_CALLBACK_WRAPPERS \
	FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveInterface_h_13_SPARSE_DATA \
	FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveInterface_h_13_ACCESSORS \
	FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveInterface_h_13_CALLBACK_WRAPPERS \
	FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAVINGSYSTEM_API UClass* StaticClass<class USaveInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
