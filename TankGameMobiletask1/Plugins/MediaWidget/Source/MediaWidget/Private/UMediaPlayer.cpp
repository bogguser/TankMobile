// Fill out your copyright notice in the Description page of Project Settings.


#include "UMediaPlayer.h"

#include "DesktopPlatform/Public/DesktopPlatformModule.h"
#include "DesktopPlatform/Public/IDesktopPlatform.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "MediaAssets/Public/FileMediaSource.h"
#include "MediaAssets/Public/MediaPlayer.h"
#include "Windows/AllowWindowsPlatformTypes.h"

bool UUMediaPlayer::Initialize()
{
	return Super::Initialize();
}

void UUMediaPlayer::NativeConstruct()
{
	Super::NativeConstruct();
}

UUMediaPlayer::UUMediaPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

void UUMediaPlayer::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
	if(ButtonBrowse->IsPressed())
	{
		TArray<FString> OutFileNames;
		IDesktopPlatform* DesktopPlatform =
			FDesktopPlatformModule::Get();
		if (DesktopPlatform)
		{
			FString FileTypes = "All Files(*.PNG;*.JPG;*.MP4)|*.PNG;*.JPG;*.MP4|"
							"Image Files(*.PNG;*.JPG;)|*.PNG;*.JPG;|"
							"Video Files(*.MP4)|*.MP4";
			uint32 SelectionFlag = 0;
			DesktopPlatform->OpenFileDialog(
				FSlateApplication::Get().FindBestParentWindowHandleForDialogs(nullptr),
				"Choose content", "", "", FileTypes, SelectionFlag, OutFileNames);
        
			if (OutFileNames.Num() > 0)
			{
				FString Path = OutFileNames[0];
				PathMedia = Path;
				//UTexture2D * Texture = UKismetRenderingLibrary::ImportFileAsTexture2D(this, PathMedia);
				// ImageMedia->SetBrushFromTexture(Texture);
			}
			MediaPlayer->OpenFile(PathMedia);
			UTexture2D * Texture = UKismetRenderingLibrary::ImportFileAsTexture2D(this, PathMedia);
			if(Texture != nullptr)
			{
				ImageMedia->SetBrushFromTexture(Texture);
			}
			MediaTexture->SetMediaPlayer(MediaPlayer);
			MediaPlayer->Play();
		}
	}

	if(ButtonExit->IsPressed())
	{
		RemoveFromParent();
		UWorld* World = GetWorld();
		
		APlayerController* PlayerController = World->GetFirstPlayerController();
		
		FInputModeGameOnly const GameModeData;
		PlayerController->SetInputMode(GameModeData);
		
		PlayerController->bShowMouseCursor = false;
		PlayerController->SetPause(false);
	}
	
}



