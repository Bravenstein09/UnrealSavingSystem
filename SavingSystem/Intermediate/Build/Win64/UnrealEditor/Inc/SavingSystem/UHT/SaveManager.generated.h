// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SaveManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSaveMetadata;
#ifdef SAVINGSYSTEM_SaveManager_generated_h
#error "SaveManager.generated.h already included, missing '#pragma once' in SaveManager.h"
#endif
#define SAVINGSYSTEM_SaveManager_generated_h

#define FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveManager_h_20_SPARSE_DATA
#define FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveManager_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllSaveMetadata); \
	DECLARE_FUNCTION(execGetCurrentSaveSlot); \
	DECLARE_FUNCTION(execSetCurrentSaveSlot); \
	DECLARE_FUNCTION(execGetNewSaveSlot); \
	DECLARE_FUNCTION(execDeleteSaveSlot); \
	DECLARE_FUNCTION(execLoadGame); \
	DECLARE_FUNCTION(execSaveGame);


#define FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveManager_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllSaveMetadata); \
	DECLARE_FUNCTION(execGetCurrentSaveSlot); \
	DECLARE_FUNCTION(execSetCurrentSaveSlot); \
	DECLARE_FUNCTION(execGetNewSaveSlot); \
	DECLARE_FUNCTION(execDeleteSaveSlot); \
	DECLARE_FUNCTION(execLoadGame); \
	DECLARE_FUNCTION(execSaveGame);


#define FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveManager_h_20_ACCESSORS
#define FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveManager_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveManager(); \
	friend struct Z_Construct_UClass_USaveManager_Statics; \
public: \
	DECLARE_CLASS(USaveManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SavingSystem"), NO_API) \
	DECLARE_SERIALIZER(USaveManager)


#define FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveManager_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUSaveManager(); \
	friend struct Z_Construct_UClass_USaveManager_Statics; \
public: \
	DECLARE_CLASS(USaveManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SavingSystem"), NO_API) \
	DECLARE_SERIALIZER(USaveManager)


#define FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveManager_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveManager(USaveManager&&); \
	NO_API USaveManager(const USaveManager&); \
public: \
	NO_API virtual ~USaveManager();


#define FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveManager_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveManager(USaveManager&&); \
	NO_API USaveManager(const USaveManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveManager) \
	NO_API virtual ~USaveManager();


#define FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveManager_h_17_PROLOG
#define FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveManager_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveManager_h_20_SPARSE_DATA \
	FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveManager_h_20_RPC_WRAPPERS \
	FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveManager_h_20_ACCESSORS \
	FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveManager_h_20_INCLASS \
	FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveManager_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveManager_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveManager_h_20_SPARSE_DATA \
	FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveManager_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveManager_h_20_ACCESSORS \
	FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveManager_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveManager_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAVINGSYSTEM_API UClass* StaticClass<class USaveManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Van_Wie_Documents_Unreal_Projects_CreatingPlugins_Plugins_SavingSystem_Source_SavingSystem_Public_SaveManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
