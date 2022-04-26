// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DLCLoader.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

struct FMapInfo;
/**
 * 
 */
UCLASS()
class PACKDLCGB_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	UDLCLoader * _DLCLoader;
public:
	UFUNCTION(BlueprintCallable)
	TArray<FMapInfo> GetMapsInfo();
protected:
	void Init() override;
};
