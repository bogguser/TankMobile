// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"

#include "ControlMobileWidget.generated.h"

/**
 * 
 */
UCLASS()
class TANKGAME_API UControlMobileWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;
	
	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	UButton* BtnUp;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	UButton* BtnDown;
	
	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	UButton* BtnLeft;
	
	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	UButton* BtnRight;
	
	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	UButton* BtnFire;

	UFUNCTION()
	void OnBtnUpPressed();

	UFUNCTION()
	void OnBtnUpReleased();
	UFUNCTION()
	void OnBtnDownReleased();
	UFUNCTION()
	void OnBtnRightReleased();
	UFUNCTION()
	void OnBtnLeftReleased();

	UFUNCTION()
	void OnBtnDownPressed();

	UFUNCTION()
	void OnBtnLeftPressed();

	UFUNCTION()
	void OnBtnRightPressed();

	UFUNCTION()
	void OnBtnFireClicked();

	bool MoveRightPressed;
	bool MoveLeftPressed;
	bool MoveUpPressed;
	bool MoveDownPressed;
};
