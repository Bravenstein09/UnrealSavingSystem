#pragma once

#include "Runtime/CoreUObject/Public/UObject/Class.h"
#include "Runtime/Core/Public/Misc/DateTime.h"
#include "SaveMetadata.generated.h"

USTRUCT(BlueprintType)
struct FSaveMetadata
{
		GENERATED_BODY()

		//the name of the slot
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Default")
		FString SlotName;

		//the time that the slot was last saved
		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Default")
		FDateTime Date;

};