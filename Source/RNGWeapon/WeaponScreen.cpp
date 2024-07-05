// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponScreen.h"
#include "Components/ProgressBar.h"

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
		return;

	if (CachedWeaponStats.IsEmpty())
		return;

	for (FWeaponStat Stat : CachedWeaponStats)
	{
		if (WeaponStatWidget)
		{
			WeaponStatWidgetRef = CreateWidget<UWeaponStatWidget>(GetWorld(), UWeaponStatWidget::StaticClass());
			WeaponStatWidgetRef->Initialise();

			WeaponStatWidgetRef->StatName->Text = Stat.StatName;
			WeaponStatWidgetRef->StatValueBar->SetPercent(Stat.StatValue);
			WeaponStatWidgetRef->StatValueText->Text = (FText::FromString(FString::SanitizeFloat(Stat.StatValue)));

			WeaponStatBox->AddChildToVerticalBox(WeaponStatWidgetRef);
		}
	}
}

void UWeaponScreen::PopulatePerks()
{

}