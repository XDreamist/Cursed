// Copyright XD Studios, Inc. All Rights Reserved.

#pragma once

#include "MasterItem.h"
#include "SlotStructure.generated.h"

USTRUCT(BlueprintType)
struct FSlotStructure
{
	GENERATED_BODY()

	FORCEINLINE FSlotStructure();

	explicit FORCEINLINE FSlotStructure(TSubclassOf<UMasterItem> ItemToAdd);

	explicit FORCEINLINE FSlotStructure(TSubclassOf<UMasterItem> ItemToAdd, int32 Quantity);

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UMasterItem> Item;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 Quantity;

};

FORCEINLINE FSlotStructure::FSlotStructure()
{
}

FORCEINLINE FSlotStructure::FSlotStructure(const TSubclassOf<UMasterItem> ItemToAdd) : Item(ItemToAdd), Quantity(1)
{
}

FORCEINLINE FSlotStructure::FSlotStructure(const TSubclassOf<UMasterItem> ItemToAdd, const int32 AmountToAdd) : Item(ItemToAdd), Quantity(AmountToAdd)
{
}

FORCEINLINE uint32 GetTypeHash(const FSlotStructure& b)
{
	return FCrc::MemCrc_DEPRECATED(&b, sizeof(FSlotStructure));
}