// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "PerkToolTip.generated.h"

/**
 * 
 */
UCLASS()
class RNGWEAPON_API UPerkToolTip : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UTextBlock* PerkName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UTextBlock* PerkDescription;
};
