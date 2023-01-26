// Fill out your copyright notice in the Description page of Project Settings.


#include "SavingGameInstance.h"
#include "SaveManager.h"

void USavingGameInstance::Init()
{
	Super::Init();
	USaveManager::Init();
}
