// Fill out your copyright notice in the Description page of Project Settings.
#include "PlayerHealthBars.h"
#include "StyleSet.h"


void UPlayerHealthBars::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren);

	MyPlayerHealthBars.Reset();
}



TSharedRef<SWidget> UPlayerHealthBars::RebuildWidget()
{
	MyPlayerHealthBars = SNew(SPlayerHealthBars)
	.PlayerProgressBar(&WidgetStyle);

	return MyPlayerHealthBars.ToSharedRef();
}
