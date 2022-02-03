// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "QuestDialog.generated.h"

/**
 * 
 */
UCLASS()
class QUESTSYSTEM_API UQuestDialog : public UUserWidget
{
	GENERATED_BODY()

public:
	void NativeConstruct() override;
	void Init(class AQuest* InQuest);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuestAccepted, class AQuest*, Quest);
	UPROPERTY(BlueprintAssignable)
	FOnQuestAccepted OnQuestAccepted;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnQuestQuited);
	UPROPERTY(BlueprintAssignable)
	FOnQuestQuited OnQuestQuited;

protected:
	UPROPERTY(meta = (BindWidgetOptional))
	class UQuestDescriptionWidget* Description;
	
	UPROPERTY(meta = (BindWidgetOptional))
	class UButton* RejectButton;
	
	UPROPERTY(meta = (BindWidgetOptional))
	class UButton* AcceptButton;

	UFUNCTION()
	void RejectQuest();
	
	UFUNCTION()
	void AcceptQuest();

	void HideDialog();

private:
	UPROPERTY()
	class AQuest* Quest;
};
