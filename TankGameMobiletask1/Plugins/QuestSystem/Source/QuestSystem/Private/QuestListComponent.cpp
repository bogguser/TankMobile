// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestListComponent.h"

#include "CurrentObjectivesWidget.h"
#include "Quest.h"
#include "Blueprint/UserWidget.h"


void UQuestListComponent::AddQuest(AQuest* Quest)
{
	if(Quest && !AcceptedQuests.Contains(Quest))
	{
		AcceptedQuests.AddUnique(Quest);
		Quest->TakeQuest(GetOwner());
		Quest->OnQuestStatusUpdate.AddLambda([this](AQuest* Quest)
		{
			if(ActiveQuest == Quest)
			{
				if(OnActiveQuestChanged.IsBound())
				{
					OnActiveQuestChanged.Broadcast(Quest);
				}
			}
		});
		if(!ActiveQuest)
		{
			SetActiveQuest(Quest);
		}
	}
	
}

const TArray<AQuest*>& UQuestListComponent::GetQuests() const
{
	return AcceptedQuests;
}

AQuest* UQuestListComponent::GetActiveQuest() const
{
	return ActiveQuest;
}

void UQuestListComponent::SetActiveQuest(AQuest* Quest)
{
	if(AcceptedQuests.Contains(Quest))
	{
		ActiveQuest = Quest;
		if(OnActiveQuestChanged.IsBound())
		{
			OnActiveQuestChanged.Broadcast(Quest);
		}
	}
}

void UQuestListComponent::BeginPlay()
{
	Super::BeginPlay();

	if(CurrentObjectivesWidgetClass)
	{
		UCurrentObjectivesWidget* CurrentObjectivesWidget = CreateWidget<UCurrentObjectivesWidget>(GetWorld(),CurrentObjectivesWidgetClass);
		OnActiveQuestChanged.AddDynamic(CurrentObjectivesWidget, &UCurrentObjectivesWidget::SetCurrentObjectives);
		CurrentObjectivesWidget->AddToViewport();
	}
	
}



