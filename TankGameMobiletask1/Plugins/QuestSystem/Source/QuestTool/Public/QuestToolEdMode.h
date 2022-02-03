// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "EdMode.h"
#include "QuestToolEdModeToolkit.h"

class FQuestToolEdMode : public FEdMode
{
public:
	const static FEditorModeID EM_QuestToolEdModeId;
public:
	FQuestToolEdMode();
	virtual ~FQuestToolEdMode();

	// FEdMode interface
	virtual void Enter() override;
	virtual void Exit() override;
	//virtual void Tick(FEditorViewportClient* ViewportClient, float DeltaTime) override;
	virtual void Render(const FSceneView* View, FViewport* Viewport, FPrimitiveDrawInterface* PDI) override;
	virtual void DrawHUD(FEditorViewportClient* ViewportClient, FViewport* Viewport, const FSceneView* View, FCanvas* Canvas) override;
	virtual void ActorSelectionChangeNotify() override;
	bool UsesToolkits() const override;
	// End of FEdMode interface

protected:
	TArray<AActor*> SelectedActors;
	FQuestToolEdModeToolkit ToolKit;
	FLinearColor Col;

	void UpdateSelectedActors();

};
