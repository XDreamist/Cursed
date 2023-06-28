// Copyright XD Studios, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractInterface.h"             //
#include "Components/WidgetComponent.h"    //
#include "InteractWidget.h"
#include "BaseItem.h"                    // 
#include "Pickup.generated.h"

UCLASS()
class CURSED_API APickup : public AActor, public IInteractInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickup();

	UPROPERTY()
	USceneComponent* Root = nullptr;

	UStaticMeshComponent* Sphere = nullptr;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UBaseItem> Item;

	UStaticMeshComponent* StaticMesh = nullptr;

	UPROPERTY(VisibleAnywhere)
	UWidgetComponent* Widget;

	UInteractWidget* DisplayWid = nullptr;

	FItemDetails Details;

	void SetDetails();

	UFUNCTION()//BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
	virtual void OnInteract(AActor* Causer);
	//virtual void OnInteract_Implementation(AActor* Causer);

	UFUNCTION()
	virtual void DisplayWidget(bool Show);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
