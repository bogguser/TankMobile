// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestSystemCharacter.h"

#include "Quest.h"
#include "QuestDialog.h"
#include "QuestListComponent.h"
#include "Blueprint/UserWidget.h"

// Sets default values
AQuestSystemCharacter::AQuestSystemCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AQuestSystemCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AQuestSystemCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// if(bAllertActive())
	// {
	// 	AlertQuest->SetHiddenInGame(true);
	// }
	// else AlertQuest->SetHiddenInGame(false);

}

// Called to bind functionality to input
void AQuestSystemCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}



void AQuestSystemCharacter::OnQuestDialogClosed()
{
	NotifyInteractionFinished(this, InteractingActor);
}


void AQuestSystemCharacter::Interact_Implementation(AActor* ActorInteractionWithObject)
{
	if(ActorInteractionWithObject)
	{
		UActorComponent* ActorQuestListComp = ActorInteractionWithObject->GetComponentByClass(UQuestListComponent::StaticClass());
		if(ActorQuestListComp)
		{
			UQuestListComponent* ActorQuestList = Cast<UQuestListComponent>(ActorQuestListComp);

			TArray<AActor*> AttachedActors;
			GetAttachedActors(AttachedActors);
			bool bHadQuestAvailable = false;
			for(AActor* Actor : AttachedActors)
			{
				if (AQuest* Quest = Cast<AQuest>(Actor))
				{
					if(Quest->bIsTaken || (Quest->PrerquisedQuest && !Quest->PrerquisedQuest->IsCompleted()))
					{
						continue;
					}

					InteractingActor = ActorInteractionWithObject;
					
					if(QuestDialogClass)
					{
						UQuestDialog* QuestDialog = CreateWidget<UQuestDialog>(GetWorld(), QuestDialogClass);
						QuestDialog->Init(Quest);
						QuestDialog->OnQuestAccepted.AddDynamic(ActorQuestList, &UQuestListComponent::AddQuest);
						QuestDialog->OnQuestQuited.AddDynamic(this, &AQuestSystemCharacter::OnQuestDialogClosed);
						QuestDialog->AddToViewport();
					}
					bHadQuestAvailable = true;
					break;
				}
			}
			if(!bHadQuestAvailable)
			{
				NotifyInteractionFinished(this, ActorInteractionWithObject);
			}
		}
	}
}

bool AQuestSystemCharacter::bAllertActive()
{
	TArray<AActor*> AttachedActors;
	GetAttachedActors(AttachedActors);
	for(AActor* Actor : AttachedActors)
	{
		if (AQuest* Quest = Cast<AQuest>(Actor))
		{
			if(Quest->bIsTaken)
			{
				bQuestIsTaken = false;
			}
			else bQuestIsTaken = true;
		}
	}
	if(!bQuestIsTaken)
	{
		return false;
	}
	return true;

}



