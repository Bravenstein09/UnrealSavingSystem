// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "SavingGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class SAVINGANDLOADINGTEST_API USavingGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	virtual void Init() override;
};
