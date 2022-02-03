// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "QuestListEntry.generated.h"

/**
 * 
 */
UCLASS()
class QUESTSYSTEM_API UQuestListEntry : public UUserWidget
{
	GENERATED_BODY()

public:
	void NativeConstruct() override;

	void SetQuestText(const FText& Text);
	void SetIsSelected(bool IsSelected);

	FSimpleDelegate OnQuestChosen;

protected:
	UPROPERTY(meta = (BindWidgetOptional))
	class UTextBlock* QuestText;

	UPROPERTY(meta = (BindWidgetOptional))
	class UButton* SelectQuestButton;
	
	UPROPERTY(meta = (BindWidgetOptional))
	class UBorder* SelectionBorder;

	UFUNCTION()
	void SelectQuest();
};
