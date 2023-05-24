// Copyright XD Studios, Inc. All Rights Reserved.


#include "InteractWidget.h"
#include "Components/TextBlock.h"

void UInteractWidget::SetName(const FString Text)
{
	Name->SetText(FText::FromString(Text));
}

// called to Show or Hide Widget
void UInteractWidget::DisplayWidget(const bool Show)
{
	if (Show)
	{
		Name->SetOpacity(100.0f);
	}
	else
	{
		Name->SetOpacity(0.0f);
	}
}
