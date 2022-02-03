// Fill out your copyright notice in the Description page of Project Settings.


#include "CurrentObjectivesWidget.h"

#include "ObjectiveWidget.h"
#include "Quest.h"
#include "Components/VerticalBox.h"

void UCurrentObjectivesWidget::SetCurrentObjectives(AQuest* Quest)
{
	if(ObjectivesList && ObjectiveWidgetClass)
	{
		ObjectivesList->ClearChildren();
		for(class UObjective* Objective : Quest->Objectives)
		{
			UObjectiveWidget* ObjectiveWidget = CreateWidget<UObjectiveWidget>(this, ObjectiveWidgetClass);
			ObjectiveWidget->Init(Objective);
			ObjectivesList->AddChildToVerticalBox(ObjectiveWidget);
		}
	}
}
