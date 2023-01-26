// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SaveInterface.h"
#include "SaveMetadata.h"
#include "SaveGameData.h"
#include "kismet/GameplayStatics.h"
#include "SaveGameMetadata.h"
#include "UObject/NoExportTypes.h"
#include "SaveManager.generated.h"

/**
 * 
 */
UCLASS()
class SAVINGANDLOADINGTEST_API USaveManager : public UObject
{
	GENERATED_BODY()
	

private:

	static FString CurrentSaveSlot;
	static TArray<TScriptInterface<ISaveInterface>> SaveInterfaces;

public:
	//initialize the class. Should be done as soon as the game launches
	static void Init();

	//goes through all of the actors that have the save interface
	static void QueryAllSaveInterfaces();

	//saves the current state of the game
	UFUNCTION(BlueprintCallable, Category = "Project Saving and Loading")
	static void SaveGame();

	//loads a previously saved state of the game
	UFUNCTION(BlueprintCallable, Category = "Project Saving and Loading")
	static void LoadGame();

	
	//deletes a saved slot
	UFUNCTION(BlueprintCallable, Category = "Project Saving and Loading")
	static void DeleteSaveSlot(const FString& Slot);
	
	//gets an unused save slot
	UFUNCTION(BlueprintCallable, Category = "Project Saving and Loading")
	static UPARAM(DisplayName = "Slot") FString GetNewSaveSlot(bool& SlotFound);

	//sets the current save slot to the provided value
	UFUNCTION(BlueprintCallable, Category = "Project Saving and Loading")
	static void SetCurrentSaveSlot(const FString& Slot);

	//gets the current save slot
	UFUNCTION(BlueprintPure, Category = "Project Saving and Loading")
	static FString GetCurrentSaveSlot();

	//get every saved game
	UFUNCTION(BlueprintPure, Category = "Project Saving and Loading")
	static TArray<FSaveMetadata> GetAllSaveMetadata();
	
};
