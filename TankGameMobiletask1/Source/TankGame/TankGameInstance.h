// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "SaveGameManager.h"
#include "Engine/GameInstance.h"
#include "TankGameInstance.generated.h"


UCLASS()
class TANKGAME_API UTankGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	virtual void Init() override;

	UPROPERTY(BlueprintReadOnly)
	USaveGameManager* SaveManager;
};
