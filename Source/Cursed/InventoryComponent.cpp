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


bool UInventoryComponent::AddToInventory(const TSubclassOf<UMasterItem> Item, const int32 Quantity)
{
	if (Item != NULL && Quantity != 0)
	{
		//int32 index;
		FSlotStructure ItemToCheck = FSlotStructure(Item, Quantity);
		bool Present = true;// Items.Find(ItemToCheck, index);
		if (Present)
		{
			//Items.AddByHash(Quantity, Item);
			GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::White, TEXT("Present at : "));
			return true;
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::White, TEXT("Not Present"));
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

