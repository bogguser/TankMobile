// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Characters/PlayerTank.h"
#include "Player/TankPlayerController.h"

#include "TurretSpawnerWidget.generated.h"

/**
 * 
 */
UCLASS()
class TANKGAME_API UTurretSpawnerWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual  void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;
	virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;

protected:

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> SpawnedClass;


	UPROPERTY()
	AActor* SpawnedActor;

	UPROPERTY()
	APlayerController* PlayerController;

	void OnMouseButtonUp();
	
};
