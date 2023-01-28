// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SavingGameModeBase.generated.h"


/**
 * 
 */
UCLASS()
class SAVINGSYSTEM_API ASavingGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

		ASavingGameModeBase();

		virtual void InitGameState() override;
};
