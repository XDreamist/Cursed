// Copyright XD Studios, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInteractInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class CURSED_API IInteractInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION()//BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
	virtual void OnInteract(AActor* Causer) = 0;

	UFUNCTION()
	virtual void DisplayWidget(bool Show) = 0;

};
