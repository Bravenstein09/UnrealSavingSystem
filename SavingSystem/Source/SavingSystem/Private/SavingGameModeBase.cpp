// Fill out your copyright notice in the Description page of Project Settings.


#include "SavingGameModeBase.h"
#include "SaveManager.h"
#include "UObject/ConstructorHelpers.h"



void ASavingGameModeBase::InitGameState()
{
	USaveManager::QueryAllSaveInterfaces();
	USaveManager::LoadGame();
	Super::InitGameState();
}
