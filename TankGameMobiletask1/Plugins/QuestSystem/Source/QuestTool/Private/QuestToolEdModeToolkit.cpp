// Copyright Epic Games, Inc. All Rights Reserved.

#include "QuestToolEdModeToolkit.h"
#include "QuestToolEdMode.h"
#include "Engine/Selection.h"
#include "EditorModeManager.h"
#include "Widgets/Colors/SColorSpectrum.h"
#include "Widgets/Colors/SColorWheel.h"

#define LOCTEXT_NAMESPACE "FQuestToolEdModeToolkit"

FQuestToolEdModeToolkit::FQuestToolEdModeToolkit()
{
}

void FQuestToolEdModeToolkit::Init(const TSharedPtr<IToolkitHost>& InitToolkitHost)
{
	struct Locals
	{
		static bool IsWidgetEnabled()
		{
			return GEditor->GetSelectedActors()->Num() != 0;
		}
	};

	const float Factor = 256.0f;
	
	SAssignNew(ToolkitWidget, SBorder)
		.HAlign(HAlign_Center)
		.Padding(25)
		.IsEnabled_Static(&Locals::IsWidgetEnabled)
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
			.AutoHeight()
			.HAlign(HAlign_Center)
			.Padding(50)
			[
				SNew(SColorWheel)
				.OnMouseCaptureBegin(FColorChange)
				.OnMouseCaptureBegin(FColorChange)
				.OnValueChanged(LinearColorValueChanged)
			]
		];
	FModeToolkit::Init(InitToolkitHost);
}

FName FQuestToolEdModeToolkit::GetToolkitFName() const
{
	return FName("QuestToolEdMode");
}

FText FQuestToolEdModeToolkit::GetBaseToolkitName() const
{
	return NSLOCTEXT("QuestToolEdModeToolkit", "DisplayName", "QuestToolEdMode Tool");
}


class FEdMode* FQuestToolEdModeToolkit::GetEditorMode() const
{
	return GLevelEditorModeTools().GetActiveMode(FQuestToolEdMode::EM_QuestToolEdModeId);
}

#undef LOCTEXT_NAMESPACE
