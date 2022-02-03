// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestLogWidget.h"

#include "Quest.h"
#include "QuestDescriptionWidget.h"
#include "QuestListComponent.h"
#include "QuestListEntry.h"
#include "Components/ScrollBox.h"

void UQuestLogWidget::Init(UQuestListComponent* QuestList)
{
	if(QuestList && QuestEntryClass)
	{
		for(AQuest* Quest : QuestList->GetQuests())
		{
			UScrollBox* Scroll = Quest->bIsStoryQuest ? StoryQuestList : SideQuestList;
			if(Scroll)
			{
				UQuestListEntry* QuestEntry = CreateWidget<UQuestListEntry>(this, QuestEntryClass);
				QuestEntry->SetQuestText(Quest->Name);
				QuestEntry->OnQuestChosen.BindUObject(QuestList, &UQuestListComponent::SetActiveQuest, Quest);
				QuestEntries.Add(Quest, QuestEntry);
				Scroll->AddChild(QuestEntry);
			}
		}
		OnActiveQuestChanged(QuestList->GetActiveQuest());
		QuestList->OnActiveQuestChanged.AddDynamic(this, &UQuestLogWidget::OnActiveQuestChanged);
	}
}

void UQuestLogWidget::OnActiveQuestChanged(AQuest* ActiveQuest)
{
	for(const TPair<AQuest*, UQuestListEntry*>& Pair : QuestEntries)
	{
		Pair.Value->SetIsSelected(Pair.Key == ActiveQuest);
	}
	if(ActiveQuestDescription)
	{
		ActiveQuestDescription->Init(ActiveQuest);
		ActiveQuestDescription->SetVisibility(ActiveQuest ? ESlateVisibility::Visible : ESlateVisibility::Collapsed);
	}
}
