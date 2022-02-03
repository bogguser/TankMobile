// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/ProgressBarWidgetStyle.h"
#include "Widgets/SCompoundWidget.h"

/**
 * 
 */
class TANKGAME_API SPlayerHealthBars : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SPlayerHealthBars)
	
	{	
	}

	SLATE_STYLE_ARGUMENT(FProgressBarStyl, PlayerProgressBar)
	
	SLATE_END_ARGS()
	
	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs);

	void SetProgressBarStyle(const FProgressBarStyle* InStyle);
protected:
	const FProgressBarStyle* PlayerHealthBarStyle;
	TSharedRef<SWidget> CreatePlayerProgressBar() const;
	
};
