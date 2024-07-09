// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/HorizontalBox.h"
#include "Components/TextBlock.h"
#include "Components/ProgressBar.h"
#include "WeaponStatWidget.generated.h"

/**
 * 
 */
UCLASS()
class RNGWEAPON_API UWeaponStatWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UHorizontalBox * StatBox;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UTextBlock* StatName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UProgressBar* StatValueBar;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UTextBlock* StatValueText;
};
