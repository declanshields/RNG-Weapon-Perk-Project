// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/Texture2D.h"
#include "Weapon.generated.h"

USTRUCT(BlueprintType)
struct FWeaponPerk
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText PerkName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText PerkDescription;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UTexture2D* PerkIcon;
};

USTRUCT(BlueprintType)
struct FPerkColumn
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FWeaponPerk> WeaponPerks;
};

USTRUCT(BlueprintType)
struct FWeaponStat
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText StatName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float StatValue;
};

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class RNGWEAPON_API AWeapon : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "WeaponDetails")
	FText WeaponName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Weapon Stats")
	TArray<FWeaponStat> WeaponStats;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Weapon Perks")
	TArray<FPerkColumn> PerkColumns;

	UFUNCTION(BlueprintCallable)
	TArray<FWeaponStat> GetWeaponStats() { return WeaponStats; }

	UFUNCTION(BlueprintCallable)
	TArray<FPerkColumn> GetWeaponPerkColumns() { return PerkColumns; }
};
