// Copyright XD Studios, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InventoryComponent.h"
#include "InteractInterface.h"
#include "BaseCharacter.generated.h"

UCLASS()
class CURSED_API ABaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseCharacter();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class UInventoryComponent* Inventory;

public:
	//Sets the life variables
	UPROPERTY(BlueprintReadOnly, Category = "Life")
	float Current_Health = 100.0f;

	UPROPERTY(BlueprintReadOnly, Category = "Life")
	float Current_Stam = 100.0f;

	UPROPERTY(BlueprintReadOnly, Category = "Life")
	float Current_Mana = 100.0f;

	UPROPERTY(EditAnywhere, Category = "Life")
	float Max_Health = 100.0f;
	
	UPROPERTY(EditAnywhere, Category = "Life")
	float Max_Stam = 100.0f;

	UPROPERTY(EditAnywhere, Category = "Life")
	float Max_Mana = 100.0f;

public: 
	// Everything under the Tracing/Interaction
	void ITrace();
	AActor* TracedActor = nullptr;
	FTimerHandle IHandle;
	void Interact();
	IInteractInterface* Interface;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	// Movement  Inputs
	void MoveForward(float AxisValue);
	void MoveRight(float AxisValue);

	// Mouse Inputs
	void Turn(float AxisValue);
	void LookUp(float AxisValue);


};
