// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PerkToolTip.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "PerkWidget.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class RNGWEAPON_API UPerkWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (BindWidget))
	UImage* PerkImage;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSubclassOf<UPerkToolTip> PerkToolTipWidget;

	UPerkToolTip* PerkToolTip;
};
