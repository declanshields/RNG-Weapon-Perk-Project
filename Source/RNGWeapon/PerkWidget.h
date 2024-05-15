// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidgetBlueprint.h"
#include "Weapon.h"
#include "PerkWidget.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class RNGWEAPON_API UPerkWidget : public UUserWidgetBlueprint
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	void PopulateScreen(AWeapon* InWeapon);
};
