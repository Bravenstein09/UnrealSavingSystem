#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SaveGameData.generated.h"

USTRUCT()
struct FSaveData
{
	GENERATED_BODY()

		UPROPERTY(VisibleAnywhere, Category = "SaveGameData")
		TArray<uint8> Data;

};


UCLASS()
class SAVINGSYSTEM_API USaveGameData : public USaveGame
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = "SaveGameData")
	TMap<FString, FSaveData> SerializedData;
};