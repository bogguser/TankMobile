// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RegionInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI, Blueprintable)
class URegionInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class REGIONANDROID_API IRegionInterface
{
	GENERATED_BODY()

public:
	virtual void OpenGallery() = 0;
};
