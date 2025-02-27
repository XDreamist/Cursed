// Copyright XD Studios, Inc. All Rights Reserved.


#include "BaseCharacter.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"

#define PrintString(String) GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::White, String)

// Sets default values
ABaseCharacter::ABaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Inventory = CreateDefaultSubobject<UInventoryComponent>(TEXT("Inventory"));
	AddOwnedComponent(Inventory);
}

// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();

	// Tracing function Timer
	GetWorldTimerManager().SetTimer(IHandle, this, &ABaseCharacter::ITrace, 0.01f, true, 0.0f);
}

// Called every frame
void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &ABaseCharacter::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &ABaseCharacter::MoveRight);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &ABaseCharacter::Turn);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &ABaseCharacter::LookUp);

	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAction(TEXT("Dash"), EInputEvent::IE_Pressed, this, &ABaseCharacter::Dash);

	PlayerInputComponent->BindAction(TEXT("Interact"), EInputEvent::IE_Pressed, this, &ABaseCharacter::Interact);

}

// Called to MoveForward
void ABaseCharacter::MoveForward(float AxisValue)
{
	FVector Forward = UKismetMathLibrary::GetForwardVector(FRotator(0.0f, GetControlRotation().Yaw, 0.0f));
    AddMovementInput(Forward, AxisValue);
}

// Called to MoveRight
void ABaseCharacter::MoveRight(float AxisValue)
{
	FVector Right = UKismetMathLibrary::GetRightVector(FRotator(0.0f, GetControlRotation().Yaw, 0.0f));
	AddMovementInput(Right, AxisValue);
}

// Called to Look Right and Left
void ABaseCharacter::Turn(float AxisValue)
{
	AddControllerYawInput(AxisValue);
}

// Called to Look Up and Down
void ABaseCharacter::LookUp(float AxisValue)
{
	AddControllerPitchInput(AxisValue);
}

// Called when Dashing 
void ABaseCharacter::Dash()
{
	//this->SetActorLocation((this->GetActorForwardVector() * 150) + this->GetActorLocation(), true);
	this->GetCharacterMovement()->MaxWalkSpeed = 1000;
	this->GetCharacterMovement()->MaxAcceleration = 1000000;
	UCharacterMovementComponent* CharMove = this->GetCharacterMovement();
}

// Called to find any Interactibles
void ABaseCharacter::ITrace()
{
	FVector Start = GetActorLocation();
	FVector End = GetActorLocation();
	const float Radius = 500.0f;
	// ECC_GameTraceChannel1 is basically the interactible channel
	// You can see that under the collisions inside Project Settings
	ETraceTypeQuery Interactible = UEngineTypes::ConvertToTraceType(ECollisionChannel::ECC_GameTraceChannel1);
	TArray<AActor*> ActorsToIgnore;
	ActorsToIgnore.Init(this,1);
	FHitResult Hit;

	bool Traced = UKismetSystemLibrary::SphereTraceSingle(GetWorld(), Start, End, 
		Radius, Interactible, /*Trace Complex:*/false, ActorsToIgnore, EDrawDebugTrace::ForOneFrame, 
		Hit, /*Ignore Self:*/true, FLinearColor::Green, FLinearColor::Red, 0.01f);

	if (Traced)
	{
		TracedActor = Hit.GetActor();
		Interface = Cast<IInteractInterface>(TracedActor);
		if(this->IsPlayerControlled())
		{
			if (Interface)
			{
				Interface->DisplayWidget(true);
			}
		}
	}
	else
	{
		TracedActor = nullptr;
		if (this->IsPlayerControlled())
		{
			if (Interface)
			{
				Interface->DisplayWidget(false);
				Interface = nullptr;
			}
		}
	}
}

// called OnInteract Function
void ABaseCharacter::Interact()
{
	if(TracedActor)
	{ 
		if(Interface)
		{ 
			Interface->OnInteract(this);
		}
	}
}
