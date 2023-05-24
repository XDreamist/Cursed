// Copyright XD Studios, Inc. All Rights Reserved.

#pragma once

#include "ItemDetails.generated.h"

USTRUCT(BlueprintType)
struct FItemDetails
{
	GENERATED_BODY()

	FORCEINLINE FItemDetails();

	explicit FORCEINLINE FItemDetails(FString IName);

	explicit FORCEINLINE FItemDetails(FString IName, FString IDesc);

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString Name = "";

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString Description = "";

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UTexture2D* Thumbnail;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float Weight = 0.0f;
};

FORCEINLINE FItemDetails::FItemDetails()
{
}

FORCEINLINE FItemDetails::FItemDetails(const FString IName) : Name(IName), Description("")
{
}

FORCEINLINE FItemDetails::FItemDetails(const FString IName, const FString IDesc) : Name(IName), Description(IDesc)
{
}

FORCEINLINE uint32 GetTypeHash(const FItemDetails& b)
{
	return FCrc::MemCrc_DEPRECATED(&b, sizeof(FItemDetails));
}

