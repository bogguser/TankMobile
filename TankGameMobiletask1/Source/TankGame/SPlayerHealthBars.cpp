// Fill out your copyright notice in the Description page of Project Settings.


#include "SPlayerHealthBars.h"
#include "SlateOptMacros.h"
#include "Characters/Tank.h"
#include "Widgets/Notifications/SProgressBar.h"


BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION
void SPlayerHealthBars::Construct(const FArguments& InArgs)
{
	
	PlayerHealthBarStyle = &InArgs._PlayerProgressBar->ProgressBarStyleTank;
	 ChildSlot
	 [
	 	SNew(SVerticalBox)
	 	+ SVerticalBox::Slot()
	 		[
	 			CreatePlayerProgressBar()
	 			
	 		]
	 ];

	
	
}


TSharedRef<SWidget> SPlayerHealthBars::CreatePlayerProgressBar() const
{
	return SNew(SProgressBar)
	.Style(PlayerHealthBarStyle)
	.Percent(100)
	.FillColorAndOpacity(FLinearColor::Red)
	.BorderPadding(1.f)
	.BarFillType(EProgressBarFillType::LeftToRight)
	.RefreshRate(1.f);
}

END_SLATE_FUNCTION_BUILD_OPTIMIZATION
