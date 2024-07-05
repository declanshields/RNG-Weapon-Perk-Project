// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponStatWidget.h"
#include "Blueprint/WidgetTree.h"

void UWeaponStatWidget::Initialise()
{
	if (StatBox == nullptr)
		StatBox = WidgetTree->ConstructWidget<UHorizontalBox>(UHorizontalBox::StaticClass());
	if (StatName == nullptr)
		StatName = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass());
	if (StatValueBar == nullptr)
		StatValueBar = WidgetTree->ConstructWidget<UProgressBar>(UProgressBar::StaticClass());
	if (StatValueText == nullptr)
		StatValueText = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass());
}