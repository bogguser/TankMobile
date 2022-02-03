// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestDialog.h"

#include "QuestDescriptionWidget.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

void UQuestDialog::NativeConstruct()
{
	if(RejectButton)
	{
		RejectButton->OnReleased.AddDynamic(this, &UQuestDialog::RejectQuest);
	}
	if(AcceptButton)
	{
		AcceptButton->OnReleased.AddDynamic(this, &UQuestDialog::AcceptQuest);
	}

	APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(),0);
	UWidgetBlueprintLibrary::SetInputMode_UIOnly(PC);
	PC->bShowMouseCursor = true;
}

void UQuestDialog::Init(AQuest* InQuest)
{
	Quest = InQuest;
	if(Description)
	{
		Description->Init(Quest);
	}
	
}

void UQuestDialog::RejectQuest()
{
	HideDialog();
}

void UQuestDialog::AcceptQuest()
{
	HideDialog();
	OnQuestAccepted.Broadcast(Quest);
}

void UQuestDialog::HideDialog()
{
	RemoveFromViewport();
	APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(),0);
	UWidgetBlueprintLibrary::SetInputMode_GameOnly(PC);
	PC->bShowMouseCursor = false;

	OnQuestQuited.Broadcast();
}
