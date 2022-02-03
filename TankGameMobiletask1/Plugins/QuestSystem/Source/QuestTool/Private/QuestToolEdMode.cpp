// Copyright Epic Games, Inc. All Rights Reserved.

#include "QuestToolEdMode.h"

#include "QuestToolEdModeToolkit.h"
#include "Toolkits/ToolkitManager.h"
#include "EditorModeManager.h"
#include "Quest.h"
#include "QuestSystemCharacter.h"
#include "Engine/Selection.h"
#include "Kismet/GameplayStatics.h"

const FEditorModeID FQuestToolEdMode::EM_QuestToolEdModeId = TEXT("EM_QuestToolEdMode");

FQuestToolEdMode::FQuestToolEdMode()
{

}

FQuestToolEdMode::~FQuestToolEdMode()
{

}

void FQuestToolEdMode::Enter()
{
	FEdMode::Enter();

	if (!Toolkit.IsValid() && UsesToolkits())
	{
		Toolkit = MakeShareable(new FQuestToolEdModeToolkit);
		Toolkit->Init(Owner->GetToolkitHost());
	}
	UpdateSelectedActors();

}

void FQuestToolEdMode::Exit()
{
	if (Toolkit.IsValid())
	{
		FToolkitManager::Get().CloseToolkit(Toolkit.ToSharedRef());
		Toolkit.Reset();
	}

	// Call base Exit method to ensure proper cleanup
	FEdMode::Exit();
}




void FQuestToolEdMode::Render(const FSceneView* View, FViewport* Viewport, FPrimitiveDrawInterface* PDI)
{
	for (AActor* BoundedActor : SelectedActors)
	{
		DrawWireBox(
			PDI,
			BoundedActor->GetComponentsBoundingBox(true),
			FColor::Green,
			1);
	}

	FEdMode::Render(View, Viewport, PDI);
	
}

void FQuestToolEdMode::DrawHUD(FEditorViewportClient* ViewportClient, FViewport* Viewport, const FSceneView* View,
	FCanvas* Canvas)
{
	FEdMode::DrawHUD(ViewportClient, Viewport, View, Canvas);

	for (AActor* SelectedActor : SelectedActors)
	{
		if (Canvas)
		{
			FBox Bounds = SelectedActor->GetComponentsBoundingBox(true);
			

			FVector DrawPos = Bounds.GetCenter() + 
					FVector(0.f, 0.f, Bounds.GetExtent().Z);
			FVector2D PixelLocation;
			View->ScreenToPixel(View->WorldToScreen(DrawPos), PixelLocation);
			PixelLocation /= ViewportClient->GetDPIScale();
			UFont* RenderFont = GEngine->GetSmallFont();
			Canvas->DrawShadowedText(PixelLocation.X, PixelLocation.Y, 
					FText::FromString(SelectedActor->GetName()), 
					RenderFont, FColor::Cyan/*Col*/);
			
		}
	}
}

void FQuestToolEdMode::ActorSelectionChangeNotify()
{
	FEdMode::ActorSelectionChangeNotify();

	UpdateSelectedActors();

}

bool FQuestToolEdMode::UsesToolkits() const
{
	return true;
}

void FQuestToolEdMode::UpdateSelectedActors()
{
	SelectedActors.Empty();

	USelection* ActorsSelection = GEditor->GetSelectedActors();
	for (FSelectionIterator Iter(*ActorsSelection); Iter; ++Iter)
	{
		AQuestSystemCharacter* LevelActor = Cast<AQuestSystemCharacter>(*Iter);
		if (LevelActor && !SelectedActors.Contains(LevelActor))
		{
			TArray<AActor*> AttachedActors;
			LevelActor->GetAttachedActors(AttachedActors);
			for(auto it : AttachedActors)
			{
				AQuest* QuestActor = Cast<AQuest>(it);
				TArray<UObjective*> Obj = QuestActor->Objectives;
				for(auto It : Obj)
				{
					auto Actor = It->GetActor();
					if(Actor)
					{
						SelectedActors.Add(Actor);
					}
				}
			}
		}
	}
	if(SelectedActors.Num() <= 0)
	{
		TArray<AActor*> FoundActorsQuestSystemCharacters;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), AQuestSystemCharacter::StaticClass(), FoundActorsQuestSystemCharacters);
		for(auto FoundActor : FoundActorsQuestSystemCharacters)
		{
			if (FoundActor && !SelectedActors.Contains(FoundActor))
			{
				SelectedActors.Add(FoundActor);
			}
		}
	}
}






