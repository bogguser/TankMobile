// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Quest.h"
#include "Characters/PlayerTank.h"
#include "GameFramework/SaveGame.h"
#include "Player/TankPlayerController.h"

#include "TankSaveGame.generated.h"

USTRUCT()
struct FQuestSaving
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, SaveGame)
	FText Name;

	UPROPERTY(EditAnywhere, SaveGame)
	FText Description;

	UPROPERTY(EditAnywhere, SaveGame)
	bool bIsTaken;

	UPROPERTY(EditAnywhere, SaveGame)
	AQuest* PrerquisedQuest;

	UPROPERTY(EditAnywhere, SaveGame)
	bool bKeepObjectivesOrder;
	
	UPROPERTY(EditAnywhere, SaveGame)
	bool bIsStoryQuest;
	
	UPROPERTY(EditAnywhere, SaveGame)
	TArray<UObjective*> Objectives;
};

USTRUCT()
struct FObjectiveParametrs
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, SaveGame)
	FText Description;
	
	UPROPERTY(EditAnywhere, SaveGame)
	EObjectiveType Type;

	UPROPERTY(EditAnywhere, SaveGame)
	bool bIsCompleted;

	UPROPERTY(EditAnywhere, SaveGame)
	bool bCanBeCompleted;
};

UCLASS()
class TANKGAME_API UTankSaveGame : public USaveGame
{
	GENERATED_BODY()

public:
	UTankSaveGame();

	UPROPERTY(BlueprintReadWrite, SaveGame)
	FVector PlayerLocation;

	UPROPERTY(BlueprintReadWrite, SaveGame)
	float PlayerCurretHealth;

	UPROPERTY(BlueprintReadWrite, SaveGame)
	TMap<FVector, float> EnemyHealth;

	UPROPERTY(EditAnywhere, SaveGame)
	TArray<FQuestSaving> QuestSavingParametrs;

	UPROPERTY(EditAnywhere, SaveGame)
	TArray<FObjectiveParametrs> QuestObjectiveParametrs;

	UPROPERTY(BlueprintReadWrite)
	TArray<AQuest*> Quests;

};
