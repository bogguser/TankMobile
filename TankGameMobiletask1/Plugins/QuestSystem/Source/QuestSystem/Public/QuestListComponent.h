// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Components/ActorComponent.h"
#include "QuestListComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQuestAction, class AQuest*, Quest);

UCLASS( ClassGroup=(QuestSystem), meta=(BlueprintSpawnableComponent) )
class QUESTSYSTEM_API UQuestListComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category="Quest System|Quest List")
	void AddQuest(class AQuest* Quest);
	
	UFUNCTION(BlueprintPure, Category="Quest System|Quest List")
	const TArray<class AQuest*>& GetQuests() const;

	UFUNCTION(BlueprintPure, Category="Quest System|Quest List")
	class AQuest* GetActiveQuest() const;

	UFUNCTION(BlueprintCallable, Category="Quest System|Quest List")
	void SetActiveQuest(class AQuest* Quest);

	UPROPERTY(BlueprintAssignable)
	FOnQuestAction OnActiveQuestChanged;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY()
	TArray<class AQuest*> AcceptedQuests;

	UPROPERTY()
	class AQuest* ActiveQuest;

	UPROPERTY(EditAnywhere, Category="Quest System|Quest List")
	TSubclassOf<class UCurrentObjectivesWidget> CurrentObjectivesWidgetClass;
		
};
