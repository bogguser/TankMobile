// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Objective.h"
#include "GameFramework/Actor.h"
#include "Quest.generated.h"

DECLARE_MULTICAST_DELEGATE_OneParam(FOnQuestStatusUpdate, class AQuest* /*Quest*/);

UCLASS()
class QUESTSYSTEM_API AQuest : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AQuest();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category= "Quest System|Quest")
	FText Name;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category= "Quest System|Quest")
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Instanced, Category= "Quest System|Quest")
	TArray<UObjective*> Objectives;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category= "Quest System|Quest")
	bool bIsStoryQuest = true;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category= "Quest System|Quest")
	bool bKeepObjectivesOrder = true;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category= "Quest System|Quest")
	AQuest* PrerquisedQuest;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category= "Quest System|Quest")
	bool bIsTaken;

#if WITH_EDITOR
	UFUNCTION(BlueprintCallable, CallInEditor, Category="Quest System|Quest")
	void UpdateLocation();

	UFUNCTION(BlueprintCallable, CallInEditor, Category="Quest System|Quest")
	void AddLocationObjective();

	UFUNCTION(BlueprintCallable, CallInEditor, Category="Quest System|Quest")
	void AddInteractObjective();

	UFUNCTION(BlueprintCallable, CallInEditor, Category="Quest System|Quest")
	void AddCollectObjective();
#endif
	
	UFUNCTION(BlueprintCallable, Category="Quest System|Quest")
	void TakeQuest(AActor* Character);

	UFUNCTION(BlueprintPure, Category="Quest System|Quest")
	bool IsCompleted();
	
	FOnQuestStatusUpdate OnQuestStatusUpdate;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void OnObjectiveCompleted(UObjective* Objective);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
