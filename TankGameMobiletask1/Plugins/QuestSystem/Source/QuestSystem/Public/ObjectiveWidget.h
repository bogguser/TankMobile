// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ObjectiveWidget.generated.h"

/**
 * 
 */
UCLASS()
class QUESTSYSTEM_API UObjectiveWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION()
	void Init(class UObjective* Objective);

protected:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidgetOptional))
	class UCheckBox* CompletionCheck;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidgetOptional))
	class UTextBlock* DescriptionText;
	
};
