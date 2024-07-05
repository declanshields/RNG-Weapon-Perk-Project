// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Weapon.h"
#include "WeaponStatWidget.h"
#include "Components/TextBlock.h"
#include "Components/HorizontalBox.h"
#include "Components/VerticalBox.h"
#include "WeaponScreen.generated.h"

/**
 * 
 */
UCLASS()
class RNGWEAPON_API UWeaponScreen : public UUserWidget
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	void SetWeapon(AActor* InWeapon);

	UFUNCTION(BlueprintCallable)
	void PopulateStats();

	UFUNCTION(BlueprintCallable)
	void PopulatePerks();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = ScreenFormatting)
	TSubclassOf<UUserWidget> WeaponStatWidget;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FPerkColumn> CachedWeaponPerkColumns;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FWeaponStat> CachedWeaponStats;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UTextBlock* WeaponName = nullptr;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UHorizontalBox* WeaponPerkColumnBox = nullptr;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
	UVerticalBox* WeaponStatBox = nullptr;

	UWeaponStatWidget* WeaponStatWidgetRef;
};
