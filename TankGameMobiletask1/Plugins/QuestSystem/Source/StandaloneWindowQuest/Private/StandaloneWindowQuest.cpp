// Copyright Epic Games, Inc. All Rights Reserved.

#include "StandaloneWindowQuest.h"

#include "LevelEditor.h"
#include "StandaloneWindowQuestCommands.h"
#include "StandaloneWindowQuestStyle.h"
#include "ToolMenus.h"
#include "PropertyEditor/Private/SDetailsView.h"
#include "Widgets/Docking/SDockTab.h"
#include "SQuestSystemEditor.h"



static const FName StandaloneWindowQuestTabName("StandaloneWindowQuest");

#define LOCTEXT_NAMESPACE "FStandaloneWindowQuestModule"

void FStandaloneWindowQuestModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FStandaloneWindowQuestStyle::Initialize();
	FStandaloneWindowQuestStyle::ReloadTextures();

	FStandaloneWindowQuestCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FStandaloneWindowQuestCommands::Get().OpenPluginWindow,
		FExecuteAction::CreateRaw(this, &FStandaloneWindowQuestModule::PluginButtonClicked),
		FCanExecuteAction());

	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FStandaloneWindowQuestModule::RegisterMenus));
	
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(StandaloneWindowQuestTabName, FOnSpawnTab::CreateRaw(this, &FStandaloneWindowQuestModule::OnSpawnPluginTab))
		.SetDisplayName(LOCTEXT("FStandaloneWindowQuestTabTitle", "StandaloneWindowQuest"))
		.SetMenuType(ETabSpawnerMenuType::Hidden);
}

void FStandaloneWindowQuestModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	UToolMenus::UnRegisterStartupCallback(this);

	UToolMenus::UnregisterOwner(this);

	FStandaloneWindowQuestStyle::Shutdown();

	FStandaloneWindowQuestCommands::Unregister();

	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(StandaloneWindowQuestTabName);
}

TSharedRef<SDockTab> FStandaloneWindowQuestModule::OnSpawnPluginTab(const FSpawnTabArgs& SpawnTabArgs)
{
    return SNew(SDockTab)
    .TabRole(ETabRole::NomadTab)
    	[
    		SNew(SQuestSystemEditor)
    	];

}

void FStandaloneWindowQuestModule::PluginButtonClicked()
{
	FGlobalTabmanager::Get()->TryInvokeTab(StandaloneWindowQuestTabName);
}



void FStandaloneWindowQuestModule::RegisterMenus()
{
	// Owner will be used for cleanup in call to UToolMenus::UnregisterOwner
	FToolMenuOwnerScoped OwnerScoped(this);

	{
		UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
		{
			FToolMenuSection& Section = Menu->FindOrAddSection("WindowLayout");
			Section.AddMenuEntryWithCommandList(FStandaloneWindowQuestCommands::Get().OpenPluginWindow, PluginCommands);
		}
	}

	{
		UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar");
		{
			FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("Settings");
			{
				FToolMenuEntry& Entry = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FStandaloneWindowQuestCommands::Get().OpenPluginWindow));
				Entry.SetCommandList(PluginCommands);
			}
		}
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FStandaloneWindowQuestModule, StandaloneWindowQuest)