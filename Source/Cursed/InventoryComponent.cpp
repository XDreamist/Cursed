// Copyright XD Studios, Inc. All Rights Reserved.


#include "InventoryComponent.h"

// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
	// ...
}


bool UInventoryComponent::AddToInventory(const TSubclassOf<UBaseItem> Item, const int32 Quantity)
{
	if (Item != NULL && Quantity != 0)
	{
		if (Items.Contains(Item))
		{
			Items[Item] = Items[Item] + Quantity;
			GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::White, FString::Printf(TEXT("Present at: %s"), Item));
			return true;
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::White, TEXT("Not Present"));
			Items.Emplace(Item, Quantity);
			return true;
		}
	}
	return false;
}

// Called when the game starts
void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

