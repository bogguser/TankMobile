// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "QuestLogWidget.h"
#include "TankSaveGame.h"
#include "Characters/PlayerTank.h"
#include "UObject/NoExportTypes.h"
#include "SaveGameManager.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameFromSlotAction, const FString&, SlotName);


UCLASS()
class TANKGAME_API USaveGameManager : public UObject
{
	GENERATED_BODY()

public:
	void Initialize();

	UFUNCTION(BlueprintCallable)
	bool DoesSaveGameWxist(const FString& SlotName);

	UFUNCTION(BlueprintCallable)
	void LoadGame(const FString& SlotName);

	UFUNCTION(BlueprintCallable)
	void SaveCurrentGame(const FString& SlotName);

	UPROPERTY(BlueprintAssignable)
	FOnGameFromSlotAction OnGameSaved;

	UPROPERTY(BlueprintAssignable)
	FOnGameFromSlotAction OnGameLoaded;

	void OnGameLoadedFromSlotHandle(const FString& SlotName, const int32 UserIndex, USaveGame* SaveGame);
	void OnGameSavedToSlotHandle(const FString& SlotName, const int32 UserIndex,bool bSuccess);

	UFUNCTION(BlueprintCallable)
	const TArray<FString>& GetExistingSavedSlots() const;

	void SaveQuest();
	void LoadedQuest();

	UPROPERTY()
	UQuestLogWidget* WidgetLog;

protected:
	//
	TArray<FString> ExistingSavedSlots;
	const FString ExistingSavedSlotsFilePath = "existing_slots.txt";

	void CacheExistingSavedSlotsInfo();
	//
	UPROPERTY(BlueprintReadWrite)
	UTankSaveGame* CurrentGameObject;

};
