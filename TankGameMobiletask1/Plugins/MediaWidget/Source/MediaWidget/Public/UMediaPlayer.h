// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Components/Overlay.h"
#include "Components/VerticalBox.h"
#include "Components/HorizontalBox.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "Blueprint/UserWidget.h"
#include "MediaAssets/Public/MediaTexture.h"

#include "UMediaPlayer.generated.h"


/**
 * 
 */
UCLASS(ABSTRACT)
class MEDIAWIDGET_API UUMediaPlayer : public UUserWidget
{
	GENERATED_BODY()

public:
	//UUMediaPlayer();
	UUMediaPlayer(const FObjectInitializer& ObjectInitializer);
	virtual bool Initialize() override;

	FString PathMedia;
	
	UPROPERTY(EditAnywhere)
	UMediaPlayer * MediaPlayer;
	
	UPROPERTY(EditAnywhere)
	UMediaTexture* MediaTexture;
	
	UPROPERTY(meta = (BindWidgetOptional))
	UOverlay* MediaOverlay;


	UPROPERTY(meta = (BindWidgetOptional))
	UVerticalBox* MediaVerticalBox;

	UPROPERTY(meta = (BindWidgetOptional))
	UHorizontalBox* MediaHorizontalBox;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite,meta = (BindWidgetOptional))
	UButton* ButtonExit;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite,meta = (BindWidgetOptional))
	UButton* ButtonBrowse;

	UPROPERTY(meta = (BindWidgetOptional))
	UTextBlock* TextExit;

	UPROPERTY(meta = (BindWidgetOptional))
	UTextBlock* TextBrowse;

	UPROPERTY(meta = (BindWidgetOptional))
	UImage* ImageMedia;


public:
	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;
private:
	int Lock = 0;
};
