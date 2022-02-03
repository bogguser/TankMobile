// Fill out your copyright notice in the Description page of Project Settings.


#include "SaveGameManager.h"

#include "../../Plugins/QuestSystem/Intermediate/Build/Win64/UE4Editor/Development/QuestSystem/Definitions.QuestSystem.h"
#include "Characters/EnemyTank.h"
#include "Characters/PlayerTank.h"
#include "GameFramework/SpectatorPawn.h"
#include "Kismet/GameplayStatics.h"
#include "Quest.h"
#include "QuestLogWidget.h"


void USaveGameManager::Initialize()
{
	CurrentGameObject = Cast<UTankSaveGame>(UGameplayStatics::CreateSaveGameObject(UTankSaveGame::StaticClass()));
/////
	ExistingSavedSlots.Empty();
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	FString FilePath = FPaths::Combine(FPaths::ProjectSavedDir(), ExistingSavedSlotsFilePath);
	if(PlatformFile.FileExists(*FilePath))
	{
		FString ExistingSavingArray;
		if(FFileHelper::LoadFileToString(ExistingSavingArray, *FilePath))
		{
			ExistingSavingArray.ParseIntoArray(ExistingSavedSlots, TEXT(","));
		}
	}
}

bool USaveGameManager::DoesSaveGameWxist(const FString& SlotName)
{
	return UGameplayStatics::DoesSaveGameExist(SlotName, 0);
}

void USaveGameManager::LoadGame(const FString& SlotName)
{
	TArray<AActor*> EnemyTanks;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AEnemyTank::StaticClass(), EnemyTanks);
	for(auto EnemyTank : EnemyTanks )
	{
		for(auto i = CurrentGameObject->EnemyHealth.begin(); i; ++i)
		{
			AEnemyTank* EnemyOneTank = Cast<AEnemyTank>(EnemyTank);
			if(EnemyOneTank)
			{
				EnemyOneTank->SetActorLocation(i.Key());
				EnemyOneTank->HealthComponent->CurretHealth = i.Value();
			}
		}
	}

	LoadedQuest();
	GetWorld()->GetFirstPlayerController()->GetPawn()->SetActorLocation(CurrentGameObject->PlayerLocation);
	UGameplayStatics::AsyncLoadGameFromSlot(SlotName, 0, FAsyncLoadGameFromSlotDelegate::CreateUObject(this, &USaveGameManager::OnGameLoadedFromSlotHandle));
}

void USaveGameManager::SaveCurrentGame(const FString& SlotName)
{
	TArray<AActor*> EnemyTanks;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AEnemyTank::StaticClass(), EnemyTanks);

		for(auto EnemyTank : EnemyTanks )
		{
			AEnemyTank* EnemyOneTank = Cast<AEnemyTank>(EnemyTank);
			if(EnemyOneTank)
			{
				CurrentGameObject->EnemyHealth.Add(EnemyOneTank->GetActorLocation(), EnemyOneTank->HealthComponent->CurretHealth);
			}
		}
	SaveQuest();
	CurrentGameObject->PlayerLocation = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();
	UGameplayStatics::AsyncSaveGameToSlot(CurrentGameObject, SlotName, 0, FAsyncSaveGameToSlotDelegate::CreateUObject(this, &USaveGameManager::OnGameSavedToSlotHandle));
}

void USaveGameManager::OnGameLoadedFromSlotHandle(const FString& SlotName, const int32 UserIndex, USaveGame* SaveGame)
{
	CurrentGameObject = Cast<UTankSaveGame>(SaveGame);
	if(OnGameLoaded.IsBound())
	{
		OnGameLoaded.Broadcast(SlotName);
	}
}

void USaveGameManager::OnGameSavedToSlotHandle(const FString& SlotName, const int32 UserIndex, bool bSuccess) 
{
	if(OnGameSaved.IsBound())
	{
		OnGameSaved.Broadcast(SlotName);
	}
///////////
	if(!ExistingSavedSlots.Contains(SlotName))
	{
		ExistingSavedSlots.Add(SlotName);
		CacheExistingSavedSlotsInfo();
	}
	////////
}

const TArray<FString>& USaveGameManager::GetExistingSavedSlots() const
{
	return ExistingSavedSlots;
}

void USaveGameManager::SaveQuest()
{
	//AActor* Player = UGameplayStatics::GetActorOfClass(GetWorld(), APlayerTank::StaticClass());
	TArray<AActor*> Players;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APlayerTank::StaticClass(), Players);
	for(auto Player : Players)
	{
		if(Player)
		{
			APlayerTank* QuestComp = Cast<APlayerTank>(Player);
			CurrentGameObject->Quests = QuestComp->QuestListComponent->GetQuests();
			for(auto QuestPtr : QuestComp->QuestListComponent->GetQuests())
			{
				FQuestSaving SaveParametrsQuest;
				SaveParametrsQuest.Name = QuestPtr->Name;
				SaveParametrsQuest.Description = QuestPtr->Description;
				SaveParametrsQuest.bIsTaken = QuestPtr->bIsTaken;
				SaveParametrsQuest.PrerquisedQuest = QuestPtr->PrerquisedQuest;
				SaveParametrsQuest.bKeepObjectivesOrder = QuestPtr->bKeepObjectivesOrder;
				SaveParametrsQuest.bIsStoryQuest = QuestPtr->bIsStoryQuest;
				SaveParametrsQuest.Objectives = QuestPtr->Objectives;
				CurrentGameObject->QuestSavingParametrs.Add(SaveParametrsQuest);
				
				for(auto ObjectivePtr : QuestPtr->Objectives)
				{
					FObjectiveParametrs ObjectiveParametrs;
					ObjectiveParametrs.Description = ObjectivePtr->Description;
					ObjectiveParametrs.Type = ObjectivePtr->Type;
					ObjectiveParametrs.bIsCompleted = ObjectivePtr->bIsCompleted;
					ObjectiveParametrs.bCanBeCompleted = ObjectivePtr->bCanBeCompleted;
					CurrentGameObject->QuestObjectiveParametrs.Add(ObjectiveParametrs);
				}
			}
		}
		
	}
}
	



void USaveGameManager::LoadedQuest()
{
	TArray<AActor*> Players;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APlayerTank::StaticClass(), Players);
	for(auto Player : Players)
	{
		if(Player)
		{
			APlayerTank* PlayerQuest = Cast<APlayerTank>(Player);
			for(auto QuestPtr : CurrentGameObject->Quests)
			{
				PlayerQuest->QuestListComponent->AddQuest(QuestPtr);
			}
			for(auto OneQuest : PlayerQuest->QuestListComponent->GetQuests())
			{
				if(&OneQuest)
				{
					for(auto ParametrsQuest : CurrentGameObject->QuestSavingParametrs)
					{
						OneQuest->Name = ParametrsQuest.Name;
						OneQuest->Description = ParametrsQuest.Description;
						OneQuest->bIsTaken = ParametrsQuest.bIsTaken;
						OneQuest->PrerquisedQuest = ParametrsQuest.PrerquisedQuest;
						OneQuest->bKeepObjectivesOrder = ParametrsQuest.bKeepObjectivesOrder;
						OneQuest->bIsStoryQuest = ParametrsQuest.bIsStoryQuest;
						OneQuest->Objectives = ParametrsQuest.Objectives;

						
					}
					for(auto ObjectivePtr : OneQuest->Objectives)
					{
						for (auto Obj : CurrentGameObject->QuestObjectiveParametrs)
						{
							ObjectivePtr->Description = Obj.Description;
							ObjectivePtr->Type = Obj.Type;
							ObjectivePtr->bIsCompleted = Obj.bIsCompleted;
							ObjectivePtr->bCanBeCompleted = Obj.bCanBeCompleted;
						}
					}
				}
			}
		}
	}
}



void USaveGameManager::CacheExistingSavedSlotsInfo()
{
	FString FilePath = FPaths::Combine(FPaths::ProjectSavedDir(), ExistingSavedSlotsFilePath);
	FString ExistingSavingsArray = "";
	for(const FString& Slot : ExistingSavedSlots)
	{
		ExistingSavingsArray += Slot + ",";
	}

	FFileHelper::SaveStringToFile(ExistingSavingsArray, *FilePath, FFileHelper::EEncodingOptions::ForceUnicode, &IFileManager::Get(), FILEWRITE_EvenIfReadOnly);
}

