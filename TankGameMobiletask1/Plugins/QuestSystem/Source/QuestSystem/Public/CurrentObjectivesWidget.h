// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"


#include "CurrentObjectivesWidget.generated.h"

/**
 * 
 */
UCLASS()
class QUESTSYSTEM_API UCurrentObjectivesWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION()
	void SetCurrentObjectives(class AQuest* Quest);

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class UObjectiveWidget> ObjectiveWidgetClass;

	UPROPERTY(meta = (BindWidgetOptional))
	class UVerticalBox* ObjectivesList;
};
