// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SaveMetadata.h"
#include "UObject/NoExportTypes.h"
#include "SaveSlotObject.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSaveSlotDeleted, USaveSlotObject*, Slot)
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSaveSlotSelected, USaveSlotObject*, Slot)

/**
 * 
 */
UCLASS(BlueprintType)
class SAVINGSYSTEM_API USaveSlotObject : public UObject
{
	GENERATED_BODY()
	

public:

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Slot Object")
	FOnSaveSlotDeleted OnSaveSlotDeleted;

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Slot Object")
	FOnSaveSlotSelected OnSaveSlotSelected;


	UPROPERTY(BlueprintReadOnly, Category = "Slot Object", Meta = (ExposeOnSpawn = "true"))
	FSaveMetadata SaveMetadata = {};
};
