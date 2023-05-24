// Copyright XD Studios, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemDetails.h"
#include "BaseItem.generated.h"

UCLASS()
class CURSED_API ABaseItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseItem();

	UPROPERTY()
	USceneComponent* Root = nullptr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FItemDetails Details;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* ItemMesh = nullptr;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
