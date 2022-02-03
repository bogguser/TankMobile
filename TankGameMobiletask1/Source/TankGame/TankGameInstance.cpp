// Fill out your copyright notice in the Description page of Project Settings.


#include "TankGameInstance.h"

void UTankGameInstance::Init()
{
	Super::Init();

	SaveManager = NewObject<USaveGameManager>(this);
	SaveManager->Initialize();
}
