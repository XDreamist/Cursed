// Copyright XD Studios, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ItemDetails.h"
#include "BaseItem.generated.h"

UCLASS(Blueprintable)
class CURSED_API UBaseItem : public UObject
{
	GENERATED_BODY()

public:
	UBaseItem();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FItemDetails Details;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UStaticMesh* Mesh; // = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMesh"));

	UFUNCTION(/*BlueprintNativeEvent, */BlueprintCallable)
	virtual void UseItem(class AActor* User);

};
