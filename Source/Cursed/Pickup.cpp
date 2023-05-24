// Copyright XD Studios, Inc. All Rights Reserved.


#include "Pickup.h"
#include "InventoryComponent.h"
#include "Components/ActorComponent.h"

// Sets default values
APickup::APickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = Root;

	Sphere = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SphereMesh"));
	Sphere->SetStaticMesh(LoadObject<UStaticMesh>(nullptr, TEXT("/Engine/BasicShapes/Sphere.Sphere")));
	Sphere->SetMaterial(0, Cast<UMaterial>(StaticLoadObject(UMaterial::StaticClass(), NULL, TEXT("Material'/Engine/BasicShapes/BasicShapeMaterial.BasicShapeMaterial'"))));
	Sphere->SetRelativeLocation(FVector::ZeroVector);
	Sphere->SetWorldScale3D(FVector(0.6f, 0.6f, 0.6f));
	Sphere->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	Sphere->AttachToComponent(Root, FAttachmentTransformRules::KeepRelativeTransform);

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	StaticMesh->SetupAttachment(Root);

	Widget = CreateDefaultSubobject<UWidgetComponent>(TEXT("Interact Widget"));
	Widget->SetupAttachment(StaticMesh);
	Widget->SetPivot(FVector2D(-0.05f, -0.05f));
	Widget->SetWidgetSpace(EWidgetSpace::Screen);
	Widget->SetDrawAtDesiredSize(true);
	
}

// called for setting the details of the item and mesh from the class we give from editor
void APickup::SetDetails()
{
	if(Item)
	{ 
		FTransform SpawnTransform;
		SpawnTransform.SetLocation(GetActorLocation());
		SpawnTransform.SetRotation(FQuat(0.0f, 0.0f, 0.0f, 0.0f));
		SpawnTransform.SetScale3D(FVector::ZeroVector);

		//UMasterItem* ItemRef = GetWorld()->SpawnActor<UMasterItem>(Item, SpawnTransform);
		UMasterItem* ItemRef = Item.GetDefaultObject();

		if (ItemRef)
		{
			UStaticMeshComponent* Tmp = nullptr;
			//Tmp = ItemToSpawn->FindComponentByClass<UStaticMeshComponent>();
			Tmp = ItemRef->Mesh;
			Details = ItemRef->Details;
			StaticMesh->SetStaticMesh(Tmp->GetStaticMesh());
			//StaticMesh->SetMaterial(0, Tmp->GetMaterial(0));
			//StaticMesh->SetRelativeTransform(Tmp->GetRelativeTransform());
			//StaticMesh->SetMassOverrideInKg(NAME_None, 300.0f, true);
			StaticMesh->SetCollisionResponseToChannel(ECollisionChannel::ECC_GameTraceChannel1, ECollisionResponse::ECR_Block);
			StaticMesh->SetSimulatePhysics(true);
		}

		ItemRef = nullptr;
	}

	else
	{
		Destroy();
	}
}

// called if a Character interacts with this actor
void APickup::OnInteract(AActor* Causer)
{
	UInventoryComponent* InventoryComponent = nullptr;
	UActorComponent* Comp = Causer->GetComponentByClass(TSubclassOf<UInventoryComponent>());
	InventoryComponent = Cast<UInventoryComponent>(Comp);
	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::White, Details.Name);
	InventoryComponent->AddToInventory(Item, 1);
	Destroy();
}

// called to Show/Hide Widget
void APickup::DisplayWidget(bool Show)
{
	if(Show)
	{
		DisplayWid->DisplayWidget(true);
	}
	else
	{
		DisplayWid->DisplayWidget(false);
	}
}

// Called when the game starts or when spawned
void APickup::BeginPlay()
{
	Super::BeginPlay();
	
	Sphere->SetVisibility(false);

	APickup::SetDetails();

	DisplayWid = Cast<UInteractWidget>(Widget->GetUserWidgetObject());

	if (DisplayWid != nullptr)
	{
		DisplayWid->SetName(Details.Name);
	}
}

// Called every frame
void APickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

