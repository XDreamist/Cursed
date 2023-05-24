// Copyright XD Studios, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InteractWidget.generated.h"

/**
 * 
 */
UCLASS()
class CURSED_API UInteractWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	void SetName(const FString Text);

	void DisplayWidget(const bool Show);

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	class UTextBlock* Name;

};
