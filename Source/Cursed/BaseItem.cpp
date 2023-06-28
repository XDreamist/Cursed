// Copyright XD Studios, Inc. All Rights Reserved.


#include "BaseItem.h"

UBaseItem::UBaseItem()
{

}

void UBaseItem::UseItem(class AActor* User)
{
	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::White, TEXT("Item Used"));
}
