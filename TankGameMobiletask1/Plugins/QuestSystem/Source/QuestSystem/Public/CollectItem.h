// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CollectItem.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UCollectItem : public UInterface
{
	GENERATED_BODY()
};


DECLARE_MULTICAST_DELEGATE_TwoParams(FOnCollectItem, AActor* /*CollectItem*/ , AActor* /*OverlappedActor*/)
/**
 * 
 */
class QUESTSYSTEM_API ICollectItem
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual void NotifyOverlapWithActor(AActor* CollectItem, AActor* OverlappedActor)
	{
		if(OnCollectItem.IsBound())
		{
			OnCollectItem.Broadcast(CollectItem, OverlappedActor);
		}
	}

	FOnCollectItem OnCollectItem;
};
