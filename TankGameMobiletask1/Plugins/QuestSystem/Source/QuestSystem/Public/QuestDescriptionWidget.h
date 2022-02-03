// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "QuestDescriptionWidget.generated.h"

/**
 * 
 */
UCLASS()
class QUESTSYSTEM_API UQuestDescriptionWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION()
	void Init(class AQuest* Quest);

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class UObjectiveWidget> ObjectiveWidgetClass;
protected:
	UPROPERTY(meta = (BindWidgetOptional))
	class UTextBlock* NameText;

	UPROPERTY(meta = (BindWidgetOptional))
	class UScrollBox* ObjectivesList;

	UPROPERTY(meta = (BindWidgetOptional))
	class UTextBlock* DescriptionText;

};
