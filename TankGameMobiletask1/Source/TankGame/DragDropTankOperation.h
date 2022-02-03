// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/DragDropOperation.h"
#include "DragDropTankOperation.generated.h"

/**
 * 
 */
UCLASS()
class TANKGAME_API UDragDropTankOperation : public UDragDropOperation
{
	GENERATED_BODY()
public:
	FText TankName;
	
};
