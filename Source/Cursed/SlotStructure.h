// Copyright XD Studios, Inc. All Rights Reserved.

#pragma once

#include "BaseItem.h"
#include "SlotStructure.generated.h"

USTRUCT(BlueprintType)
struct FSlotStructure
{
	GENERATED_BODY()

	FORCEINLINE FSlotStructure();

	explicit FORCEINLINE FSlotStructure(TSubclassOf<UBaseItem> ItemToAdd);

	explicit FORCEINLINE FSlotStructure(TSubclassOf<UBaseItem> ItemToAdd, int32 Quantity);

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UBaseItem> Item;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 Quantity;

	bool operator==(const FSlotStructure& ItemToCheck) const;

};

FORCEINLINE FSlotStructure::FSlotStructure()
{
}

FORCEINLINE FSlotStructure::FSlotStructure(const TSubclassOf<UBaseItem> ItemToAdd) : Item(ItemToAdd), Quantity(1)
{
}

FORCEINLINE FSlotStructure::FSlotStructure(const TSubclassOf<UBaseItem> ItemToAdd, const int32 AmountToAdd) : Item(ItemToAdd), Quantity(AmountToAdd)
{
}

FORCEINLINE uint32 GetTypeHash(const FSlotStructure& b)
{
	return FCrc::MemCrc_DEPRECATED(&b, sizeof(FSlotStructure));
}

FORCEINLINE bool FSlotStructure::operator==(const FSlotStructure& ItemToCheck) const
{
	return Item == ItemToCheck.Item;
}