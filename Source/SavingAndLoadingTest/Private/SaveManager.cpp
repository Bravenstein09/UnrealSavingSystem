// Fill out your copyright notice in the Description page of Project Settings.


#include "SaveManager.h"


FString USaveManager::CurrentSaveSlot;
TArray<TScriptInterface<ISaveInterface>> USaveManager::SaveInterfaces;

static const FString kMetadataSaveSlot = "SaveGameMetadata";
static const int32 kMaxSaveSlots = 50;

void USaveManager::Init()
{
	CurrentSaveSlot = "Default";

	//Make sure we have save metadata in case the game has never been ran before
	USaveGame* SaveGameMetadata = UGameplayStatics::LoadGameFromSlot(kMetadataSaveSlot, 0);

	//we dont have a saved game
	if (SaveGameMetadata == nullptr)
	{
		//create a new save game
		USaveGame* SaveGameObject = UGameplayStatics::CreateSaveGameObject(USaveGameMetadata::StaticClass());

		UGameplayStatics::SaveGameToSlot(SaveGameObject, kMetadataSaveSlot, 0);
	}
}

void USaveManager::QueryAllSaveInterfaces()
{

	//clearing any old garbage entries
	SaveInterfaces.Empty();

	//get every actor that impliments the save interface
	TArray<AActor*> SavingActors;
	UGameplayStatics::GetAllActorsWithInterface(GWorld, USaveInterface::StaticClass(), SavingActors);

	for (AActor* CurrentSavingActor : SavingActors)
	{
		SaveInterfaces.Add(CurrentSavingActor);
	}
}

void USaveManager::SaveGame()
{

	//create new save data instance
	USaveGameData* SaveGameData = Cast<USaveGameData>(UGameplayStatics::CreateSaveGameObject(USaveGameData::StaticClass()));

	//go through all actors with save interface and save them
	for (auto& SaveInterface : SaveInterfaces)
	{

		if (SaveInterface.GetObject() == nullptr)
		{
			// if object no longer exists don't save it
			continue;
		}

		//Let the object know its gonna be saved
		SaveInterface->Execute_OnBeforeSave(SaveInterface.GetObject());

		//find unique save data by provided name
		FString UniqueSaveName = SaveInterface->Execute_GetUniqueSaveName(SaveInterface.GetObject());
		FSaveData& SaveData = SaveGameData->SerializedData.Add(UniqueSaveName);

		//actually save our data
		FMemoryWriter MemWriter = FMemoryWriter(SaveData.Data);
		MemWriter.ArIsSaveGame = true;

		SaveInterface.GetObject()->Serialize(MemWriter);
	}

	//saving the game to your current slot
	UGameplayStatics::SaveGameToSlot(SaveGameData, CurrentSaveSlot, 0);

	//update the metadata file with the new slot
	USaveGameMetadata* SaveGameMetadata = Cast<USaveGameMetadata>(UGameplayStatics::LoadGameFromSlot(kMetadataSaveSlot, 0 ));

	//set metadata properties
	FSaveMetadata& SaveMetadata = SaveGameMetadata->SavedGamesMetadata.FindOrAdd(CurrentSaveSlot);
	SaveMetadata.SlotName = CurrentSaveSlot;
	SaveMetadata.Date = FDateTime::Now();

	//commit and save changes to the metadata file
	UGameplayStatics::SaveGameToSlot(SaveGameMetadata, kMetadataSaveSlot, 0);

	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Magenta, "Saved: " + CurrentSaveSlot);
}

void USaveManager::LoadGame()
{
	USaveGameData* SaveGameData = Cast<USaveGameData>(UGameplayStatics::LoadGameFromSlot(CurrentSaveSlot, 0));

	if (SaveGameData == nullptr)
	{
		//no saves exist yet for this slot
		//saving a default slot
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Magenta, "Trying to load: " + CurrentSaveSlot + " but it is null");
		return;
		SaveGame();
		

		//reload the slot
		SaveGameData = Cast<USaveGameData>(UGameplayStatics::LoadGameFromSlot(CurrentSaveSlot, 0));
	}

	//loop through all the actors that have saved data
	//that needs to be loaded
	for (auto& SaveInterface : SaveInterfaces)
	{
		if (SaveInterface.GetObject() == nullptr)
		{
			continue;
		}

		//find objects unique name
		//and find saved data
		FString UniqueSaveName = SaveInterface->Execute_GetUniqueSaveName(SaveInterface.GetObject());
		FSaveData* SaveData = SaveGameData->SerializedData.Find(UniqueSaveName);
		//if they didnt have anything saved skip them
		if (SaveData == nullptr)
			continue;

		//deserialze objects data
		FMemoryReader MemReader(SaveData->Data);
		MemReader.ArIsSaveGame = false;

		SaveInterface.GetObject()->Serialize(MemReader);
	}

	//if in engine add a debug message
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Magenta, "Loaded: " + CurrentSaveSlot);
}

void USaveManager::DeleteSaveSlot(const FString& Slot)
{
	//delete the desired slot
	UGameplayStatics::DeleteGameInSlot(Slot, 0);

	//load the slot metadata
	USaveGameMetadata* SaveGameMetadata = Cast<USaveGameMetadata>(UGameplayStatics::LoadGameFromSlot(kMetadataSaveSlot, 0));
	SaveGameMetadata->SavedGamesMetadata.Remove(Slot);

	//save the metadata file
	UGameplayStatics::SaveGameToSlot(SaveGameMetadata, kMetadataSaveSlot, 0);

	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Magenta, "Deleted: " + Slot);
}

FString USaveManager::GetNewSaveSlot(bool& SlotFound)
{
	SlotFound = false;

	//load the metadata file
	USaveGameMetadata* SaveGameMetadata = Cast<USaveGameMetadata>(UGameplayStatics::LoadGameFromSlot(kMetadataSaveSlot, 0));

	for (int32 i = 0; i < kMaxSaveSlots; ++i)
	{
		FString SlotName = "Save Slot " + FString::FromInt(i);

		if (SaveGameMetadata->SavedGamesMetadata.Contains(SlotName) == false)
		{
			//hey this slot is available
			SlotFound = true;
			return SlotName;
		}
	}

	//if this executes we did not find a slot
	return FString();
}

void USaveManager::SetCurrentSaveSlot(const FString& Slot)
{
	CurrentSaveSlot = Slot;
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Magenta, "Set Current Save Slot : " + CurrentSaveSlot);
}

FString USaveManager::GetCurrentSaveSlot()
{
	return CurrentSaveSlot;
}

TArray<FSaveMetadata> USaveManager::GetAllSaveMetadata()
{
	TArray<FSaveMetadata> Metadata;

	//load the metadata file
	USaveGameMetadata* SaveGameMetadata = Cast<USaveGameMetadata>(UGameplayStatics::LoadGameFromSlot(kMetadataSaveSlot, 0));
	
	Metadata.Reserve(SaveGameMetadata->SavedGamesMetadata.Num());

	//add each saved game's metadata to the array
	for (const auto& SavedGame : SaveGameMetadata->SavedGamesMetadata)
	{
		Metadata.Push(SavedGame.Value);
	}

	return Metadata;
}
