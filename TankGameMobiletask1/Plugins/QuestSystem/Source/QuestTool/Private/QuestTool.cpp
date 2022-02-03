// Copyright Epic Games, Inc. All Rights Reserved.

#include "QuestTool.h"
#include "QuestToolEdMode.h"

#define LOCTEXT_NAMESPACE "FQuestToolModule"

void FQuestToolModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	FEditorModeRegistry::Get().RegisterMode<FQuestToolEdMode>(FQuestToolEdMode::EM_QuestToolEdModeId, LOCTEXT("QuestToolEdModeName", "QuestToolEdMode"), FSlateIcon(), true);
}

void FQuestToolModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FEditorModeRegistry::Get().UnregisterMode(FQuestToolEdMode::EM_QuestToolEdModeId);
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FQuestToolModule, QuestTool)