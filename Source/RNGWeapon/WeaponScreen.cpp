// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponScreen.h"
#include "Components/ProgressBar.h"
#include "Blueprint/WidgetTree.h"
#include "PerkColumnWidget.h"
#include "PerkWidget.h"

void UWeaponScreen::SetWeapon(AActor* InWeapon)
{
	if (AWeapon* tempWeapon = Cast<AWeapon>(InWeapon))
	{
		CachedWeaponStats = tempWeapon->GetWeaponStats();
		CachedWeaponPerkColumns = tempWeapon->GetWeaponPerkColumns();

		PopulateStats();
		PopulatePerks();
	}
}

void UWeaponScreen::PopulateStats()
{
	if (WeaponStatBox)
	{
		WeaponStatBox->ClearChildren();
	}
	else
	{
		return;
	}

	if (CachedWeaponStats.IsEmpty())
		return;

	for (FWeaponStat Stat : CachedWeaponStats)
	{
		if (WeaponStatWidget)
		{
			UWeaponStatWidget* WeaponWidget = CreateWidget<UWeaponStatWidget>(GetWorld(), WeaponStatWidget);

			WeaponWidget->StatName->SetText(Stat.StatName);
			WeaponWidget->StatValueBar->SetPercent((Stat.StatValue / 100));
			WeaponWidget->StatValueText->SetText(FText::FromString(FString::SanitizeFloat(Stat.StatValue)));

			WeaponStatBox->AddChildToVerticalBox(WeaponWidget);
		}
	}
}

void UWeaponScreen::PopulatePerks()
{
	if (WeaponPerkColumnBox)
		WeaponPerkColumnBox->ClearChildren();

	if (CachedWeaponPerkColumns.IsEmpty())
		return;

	if (PerkColumnWidget && PerkWidget)
	{
		for (FPerkColumn PerkColumn : CachedWeaponPerkColumns)
		{
			UPerkColumnWidget* tempColumnWidget = CreateWidget<UPerkColumnWidget>(GetWorld(), PerkColumnWidget);

			for (FWeaponPerk Perk : PerkColumn.WeaponPerks)
			{
				UPerkWidget* tempPerk = CreateWidget<UPerkWidget>(GetWorld(), PerkWidget);
				tempPerk->PerkToolTip = CreateWidget<UPerkToolTip>(GetWorld(), tempPerk->PerkToolTipWidget);

				tempPerk->PerkToolTip->PerkName->SetText(Perk.PerkName);
				tempPerk->PerkToolTip->PerkDescription->SetText(Perk.PerkDescription);
				tempPerk->PerkImage->SetBrushFromTexture(Perk.PerkIcon);

				tempColumnWidget->PerkColumnBox->AddChildToVerticalBox(tempPerk);
			}

			WeaponPerkColumnBox->AddChildToHorizontalBox(tempColumnWidget);
		}
	}
}