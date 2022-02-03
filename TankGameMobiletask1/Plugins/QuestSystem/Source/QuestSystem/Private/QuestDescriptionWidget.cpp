// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestDescriptionWidget.h"

#include "Quest.h"
#include "Components/ScrollBox.h"
#include "Components/TextBlock.h"

void UQuestDescriptionWidget::Init(AQuest* Quest)
{
	if(Quest)
	{
		if(NameText)
		{
			NameText->SetText(Quest->Name);
		}
		if(DescriptionText)
		{
			DescriptionText->SetText(Quest->Description);
		}
		if(ObjectiveWidgetClass && ObjectivesList)
		{
			ObjectivesList->ClearChildren();
			for(UObjective* Objective : Quest->Objectives)
			{
				UObjectiveWidget* ObjectiveWidget = CreateWidget<UObjectiveWidget>(this, ObjectiveWidgetClass);
				ObjectiveWidget->Init(Objective);
				ObjectivesList->AddChild(ObjectiveWidget);
			}
		}
	}
}
