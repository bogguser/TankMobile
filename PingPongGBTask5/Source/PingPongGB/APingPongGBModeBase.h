// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include"GameFramework/PlayerStart.h"
#include "APingPongGBModeBase.generated.h"

/**
 * 
 */
UCLASS()
class PINGPONGGB_API AAPingPongGBModeBase : public AGameModeBase
{
	GENERATED_BODY()
protected:
	UPROPERTY()
	class APingPongPlayerController* Player1 = NULL;
	UPROPERTY()
    class APingPongPlayerController* Player2 = NULL;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    APlayerStart* Player1Start;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    APlayerStart* Player2Start;
    
public:
	AAPingPongGBModeBase();
	virtual void BeginPlay() override; 
	virtual void PostLogin(APlayerController* NewPlayer) override;
};
