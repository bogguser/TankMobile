// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SPlayerHealthBars.h"
#include "Components/Widget.h"

#include "Widgets/ProgressBarWidgetStyle.h"

#include "PlayerHealthBars.generated.h"

/**
 * 
 */
UCLASS()
class TANKGAME_API UPlayerHealthBars : public UWidget
{
	GENERATED_BODY()

public:
	
	
	UPROPERTY(EditAnywhere, Category = "Appearance", meta = (DisplayName = "Style"))
	FProgressBarStyl WidgetStyle;
	
	virtual void ReleaseSlateResources(bool bReleaseChildren) override;
	

protected:
	virtual TSharedRef<SWidget> RebuildWidget() override;

protected:
	TSharedPtr<SPlayerHealthBars> MyPlayerHealthBars;
};
