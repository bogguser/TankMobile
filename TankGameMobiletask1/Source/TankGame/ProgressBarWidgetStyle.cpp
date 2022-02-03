// Fill out your copyright notice in the Description page of Project Settings.



#include "Widgets/ProgressBarWidgetStyle.h"

FProgressBarStyl::FProgressBarStyl()
{
	ProgressBarStyleTank = FCoreStyle::Get().GetWidgetStyle<FProgressBarStyle>("ProgressBar");
}

FProgressBarStyl::~FProgressBarStyl()
{
}

const FName FProgressBarStyl::TypeName(TEXT("FProgressBarStyl"));

const FProgressBarStyl& FProgressBarStyl::GetDefault()
{
	static FProgressBarStyl Default;
	return Default;
}

void FProgressBarStyl::GetResources(TArray<const FSlateBrush*>& OutBrushes) const
{
	ProgressBarStyleTank.GetResources(OutBrushes);
}

