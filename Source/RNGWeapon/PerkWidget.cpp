// Fill out your copyright notice in the Description page of Project Settings.


#include "PerkWidget.h"
#include "Components/TextBlock.h"
#include "Components/VerticalBox.h"
#include "Components/HorizontalBox.h"

void UPerkWidget::PopulateScreen(AWeapon* InWeapon)
{
	if (!InWeapon)
		return;

	TArray<FPerkColumn> PerkColumns = InWeapon->PerkColumns;
	TArray<FWeaponStat> WeaponStats = InWeapon->WeaponStats;
}