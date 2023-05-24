// Copyright XD Studios, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ItemDetails.h"
#include "MasterItem.generated.h"

UCLASS(Blueprintable)
class CURSED_API UMasterItem : public UObject
{
	GENERATED_BODY()

public:
	UMasterItem();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FItemDetails Details;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMesh"));

	UFUNCTION(/*BlueprintNativeEvent, */BlueprintCallable)
	virtual void UseItem(class AActor* User);

};
