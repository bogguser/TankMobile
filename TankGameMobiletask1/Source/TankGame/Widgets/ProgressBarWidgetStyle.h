// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateWidgetStyle.h"
#include "Styling/SlateWidgetStyleContainerBase.h"

#include "ProgressBarWidgetStyle.generated.h"

/**
 * 
 */
USTRUCT()
struct TANKGAME_API FProgressBarStyl : public FSlateWidgetStyle
{
	GENERATED_USTRUCT_BODY()

	FProgressBarStyl();
	virtual ~FProgressBarStyl();

	// FSlateWidgetStyle
	virtual void GetResources(TArray<const FSlateBrush*>& OutBrushes) const override;
	static const FName TypeName;
	virtual const FName GetTypeName() const override { return TypeName; };
	static const FProgressBarStyl& GetDefault();

	UPROPERTY(EditAnywhere, Category="Appearance")
	FProgressBarStyle ProgressBarStyleTank;
	
};

/**
 */
UCLASS(hidecategories=Object, MinimalAPI)
class UProgressBarWidgetStyl : public USlateWidgetStyleContainerBase
{
	GENERATED_BODY()

public:
	/** The actual data describing the widget appearance. */
	UPROPERTY(Category=Appearance, EditAnywhere, meta=(ShowOnlyInnerProperties))
	FProgressBarStyl WidgetStyle;

	virtual const struct FSlateWidgetStyle* const GetStyle() const override
	{
		return static_cast< const struct FSlateWidgetStyle* >( &WidgetStyle );
	}
};
