// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "QuestLogWidget.generated.h"

/**
 * 
 */
UCLASS()
class QUESTSYSTEM_API UQuestLogWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category="Quest System|Quest Log Widget")
	void Init(class UQuestListComponent* QuestList);

protected:
	UPROPERTY(meta = (BindWidgetOptional))
	class UScrollBox* StoryQuestList;

	UPROPERTY(meta = (BindWidgetOptional))
	class UScrollBox* SideQuestList;

	UPROPERTY(meta = (BindWidgetOptional))
	class UQuestDescriptionWidget* ActiveQuestDescription;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class UQuestListEntry> QuestEntryClass;

	UPROPERTY()
	TMap<class AQuest*, class UQuestListEntry*> QuestEntries;

	UFUNCTION()
	void OnActiveQuestChanged(class AQuest* ActiveQuest);
};
