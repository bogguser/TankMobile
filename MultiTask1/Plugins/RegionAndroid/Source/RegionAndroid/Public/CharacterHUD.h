// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "CharacterHUD.generated.h"

/**
 * 
 */
UCLASS()
class REGIONANDROID_API ACharacterHUD : public AHUD
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintImplementableEvent)
	void BP_OnPhotoSelected(class UTexture2D* SelectedPhoto);

private:     
	class IRegionInterface* RegionInterface;
public:
	ACharacterHUD();
	UFUNCTION(BlueprintCallable)
	void OpenGallery();
	void OnPhotoSelected(TArray<uint8> PhotoBytes) ;
	class UTexture2D* LoadImageFromBytes(const TArray<uint8>& ImageBytes);


};
