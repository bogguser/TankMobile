// Fill out your copyright notice in the Description page of Project Settings.


#include "SQuestSystemEditor.h"
#include "SlateOptMacros.h"
#include "Engine/Selection.h"
#include "Widgets/Layout/SScrollBox.h"
#include "QuestSystem/Public/Quest.h"

#define LOCTEXT_NAMESPACE "FStandaloneWindowQuest"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION

void SQuestSystemEditor::Construct(const FArguments& InArgs)
{
	ChildSlot
	[
		SNew(SVerticalBox)
		+SVerticalBox::Slot().AutoHeight().HAlign(HAlign_Fill)
		[
			SNew(SButton)
			.OnClicked_Raw(this, &SQuestSystemEditor::RefreshButton)
			[
				SNew(STextBlock)
				.Text(LOCTEXT("RefreshButtonTitle", "Refresh"))
			]
		]
		+SVerticalBox::Slot().HAlign(HAlign_Fill).VAlign(VAlign_Fill)
		[
			SAssignNew(QuestList, SScrollBox)
			.Orientation(Orient_Vertical)
		]
	];
	
}
END_SLATE_FUNCTION_BUILD_OPTIMIZATION

FReply SQuestSystemEditor::RefreshButton()
{
	QuestList->ClearChildren();
	FPropertyEditorModule& PropEdModule = FModuleManager::Get().GetModuleChecked<FPropertyEditorModule>("PropertyEditor");
	for(FSelectionIterator It = GEditor->GetSelectedActorIterator(); It; ++It)
	{
		if (It->IsA<AQuest>())
		{
			FDetailsViewArgs Args;
			Args.bShowScrollBar = false;
			TSharedRef<IDetailsView> Details = PropEdModule.CreateDetailView(Args);
			Details->SetObject(*It);

			QuestList->AddSlot()
			[
				Details
			];
		}
	}
	return FReply::Handled();
}

#undef LOCTEXT_NAMESPACE
