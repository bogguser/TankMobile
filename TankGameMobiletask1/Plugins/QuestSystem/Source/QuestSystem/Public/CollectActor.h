// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "CollectItem.h"
#include "GameFramework/Actor.h"
#include "CollectActor.generated.h"

UCLASS()
class QUESTSYSTEM_API ACollectActor : public AActor, public ICollectItem
{
	GENERATED_BODY()
	
public:	
	UFUNCTION(BlueprintCallable, Category= "Quest System")
		void OnCollectFinished(AActor* ActorCollectWithObject)
	{
		NotifyOverlapWithActor(this, ActorCollectWithObject);
	}

};
