// Fill out your copyright notice in the Description page of Project Settings.


#include "APingPongGBModeBase.h"
#include"PingPongPlayerController.h" 
#include"PingPongPawn.h" 
#include"Kismet/GameplayStatics.h"

AAPingPongGBModeBase::AAPingPongGBModeBase()
{
	DefaultPawnClass = APingPongPawn::StaticClass();
	PlayerControllerClass = APingPongPlayerController::StaticClass();
}

void AAPingPongGBModeBase::BeginPlay()
{
	Super::BeginPlay();
}

void AAPingPongGBModeBase::PostLogin(APlayerController*NewPlayer)
{
	Super::PostLogin(NewPlayer);

	UWorld* world = GetWorld();
	if(world && (!Player1Start || !Player2Start))
	{
		TArray<AActor*> foundActors;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), APlayerStart::StaticClass(), foundActors);
		if(foundActors.Num() >0)
			Player1Start = (APlayerStart*)foundActors[0];
		if(foundActors.Num() >1)
			Player2Start = (APlayerStart*)foundActors[1];
	}

	APingPongPlayerController * currPlayer =NULL;
	APlayerStart* startPos =NULL;
	if(Player1 ==NULL)
	{
		Player1 = (APingPongPlayerController*)NewPlayer;
		currPlayer = Player1;
		startPos = Player1Start;
		UE_LOG(LogTemp, Warning, TEXT("PingPongGameMode:Init player 1"));
	}
	else if(Player2 ==NULL)
	{
		Player2 = (APingPongPlayerController*)NewPlayer;
		currPlayer = Player2;
		startPos = Player2Start;
		UE_LOG(LogTemp, Warning, TEXT("PingPongGameMode:Init player 2"));
	}
	else
	{
		UE_LOG(LogTemp,Error,TEXT("PingPongGameMode:Therearealreadytwo players in the game. New connections are not possible"));
		return;
	}
	APingPongPawn* newPawn = Cast<APingPongPawn>(NewPlayer->GetPawn());
	if(!newPawn)
	{
		newPawn = world->SpawnActor<APingPongPawn>(DefaultPawnClass);
	}
	if(startPos && newPawn)
	{
		newPawn->SetActorLocation(startPos->GetActorLocation());
		newPawn->SetActorRotation(startPos->GetActorRotation());
		NewPlayer->SetPawn(newPawn);

		currPlayer->SetStartTransfrorm(startPos->GetActorTransform());
		currPlayer->Initialize();
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Start position not setted in PingPongGameMode!"));
	}
}