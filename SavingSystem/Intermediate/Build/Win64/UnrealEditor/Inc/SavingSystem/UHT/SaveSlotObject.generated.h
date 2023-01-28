// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SaveSlotObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USaveSlotObject;
#ifdef SAVINGSYSTEM_SaveSlotObject_generated_h
#error "SaveSlotObject.generated.h already included, missing '#pragma once' in SaveSlotObject.h"
#endif
#define SAVINGSYSTEM_SaveSlotObject_generated_h

#define FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveSlotObject_h_10_DELEGATE \
struct _Script_SavingSystem_eventOnSaveSlotDeleted_Parms \
{ \
	USaveSlotObject* Slot; \
}; \
static inline void FOnSaveSlotDeleted_DelegateWrapper(const FMulticastScriptDelegate& OnSaveSlotDeleted, USaveSlotObject* Slot) \
{ \
	_Script_SavingSystem_eventOnSaveSlotDeleted_Parms Parms; \
	Parms.Slot=Slot; \
	OnSaveSlotDeleted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveSlotObject_h_11_DELEGATE \
struct _Script_SavingSystem_eventOnSaveSlotSelected_Parms \
{ \
	USaveSlotObject* Slot; \
}; \
static inline void FOnSaveSlotSelected_DelegateWrapper(const FMulticastScriptDelegate& OnSaveSlotSelected, USaveSlotObject* Slot) \
{ \
	_Script_SavingSystem_eventOnSaveSlotSelected_Parms Parms; \
	Parms.Slot=Slot; \
	OnSaveSlotSelected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveSlotObject_h_19_SPARSE_DATA
#define FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveSlotObject_h_19_RPC_WRAPPERS
#define FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveSlotObject_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveSlotObject_h_19_ACCESSORS
#define FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveSlotObject_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveSlotObject(); \
	friend struct Z_Construct_UClass_USaveSlotObject_Statics; \
public: \
	DECLARE_CLASS(USaveSlotObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SavingSystem"), NO_API) \
	DECLARE_SERIALIZER(USaveSlotObject)


#define FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveSlotObject_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUSaveSlotObject(); \
	friend struct Z_Construct_UClass_USaveSlotObject_Statics; \
public: \
	DECLARE_CLASS(USaveSlotObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SavingSystem"), NO_API) \
	DECLARE_SERIALIZER(USaveSlotObject)


#define FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveSlotObject_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveSlotObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveSlotObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveSlotObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveSlotObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveSlotObject(USaveSlotObject&&); \
	NO_API USaveSlotObject(const USaveSlotObject&); \
public: \
	NO_API virtual ~USaveSlotObject();


#define FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveSlotObject_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveSlotObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveSlotObject(USaveSlotObject&&); \
	NO_API USaveSlotObject(const USaveSlotObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveSlotObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveSlotObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveSlotObject) \
	NO_API virtual ~USaveSlotObject();


#define FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveSlotObject_h_16_PROLOG
#define FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveSlotObject_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveSlotObject_h_19_SPARSE_DATA \
	FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveSlotObject_h_19_RPC_WRAPPERS \
	FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveSlotObject_h_19_ACCESSORS \
	FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveSlotObject_h_19_INCLASS \
	FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveSlotObject_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveSlotObject_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveSlotObject_h_19_SPARSE_DATA \
	FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveSlotObject_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveSlotObject_h_19_ACCESSORS \
	FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveSlotObject_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveSlotObject_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAVINGSYSTEM_API UClass* StaticClass<class USaveSlotObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveSlotObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
