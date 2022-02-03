// Fill out your copyright notice in the Description page of Project Settings.


#include "Quest.h"

#include "CollectObjective.h"
#include "InteractionObjective.h"
#include "LocationObjective.h"
#include "Objective.h"

// Sets default values
AQuest::AQuest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	
}

void AQuest::UpdateLocation()
{
	AActor* ParentActor = GetAttachParentActor();
	if(ParentActor)
	{
		SetActorLocation(ParentActor->GetActorLocation());
	}
}

void AQuest::AddLocationObjective()
{
	Objectives.Add(NewObject<ULocationObjective>(this));
}

void AQuest::AddInteractObjective()
{
	Objectives.Add(NewObject<UInteractionObjective>(this));
}

void AQuest::AddCollectObjective()
{
	Objectives.Add(NewObject<UCollectObjective>(this));

	
}

void AQuest::TakeQuest(AActor* Character)
{
	for(int32 i = 0; i <Objectives.Num(); i++)
	{
		if(Objectives[i])
		{
			Objectives[i]->ActivateObjective(Character);
			Objectives[i]->bCanBeCompleted = !bKeepObjectivesOrder || i == 0;
			Objectives[i]->OnObjectiveCompleted.AddUObject(this, &AQuest::OnObjectiveCompleted);
		}
	}
	bIsTaken = true;
}

bool AQuest::IsCompleted()
{
	for(UObjective* Objective : Objectives)
	{
		if(Objective->bIsCompleted)
		{
			return false;
		}
	}
		return true;
}

// Called when the game starts or when spawned
void AQuest::BeginPlay()
{
	Super::BeginPlay();
	
}

void AQuest::OnObjectiveCompleted(UObjective* Objective)
{
	if(bKeepObjectivesOrder)
	{
		int32 ObjectiveIndex;
		if(Objectives.Find(Objective, ObjectiveIndex) && Objectives.IsValidIndex(ObjectiveIndex + 1))
		{
			Objectives[ObjectiveIndex + 1]->bCanBeCompleted = true;
		}
	}

	if(OnQuestStatusUpdate.IsBound())
	{
		OnQuestStatusUpdate.Broadcast(this);
	}
}

// Called every frame
void AQuest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

