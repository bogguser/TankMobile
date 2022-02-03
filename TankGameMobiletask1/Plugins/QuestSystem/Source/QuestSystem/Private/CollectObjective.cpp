// Fill out your copyright notice in the Description page of Project Settings.


#include "CollectObjective.h"

#include "CollectItem.h"

UCollectObjective::UCollectObjective()
{
	Type = EObjectiveType::Collect;
}

void UCollectObjective::ActivateObjective(AActor* Character)
{
	if(ICollectItem* CollectItem = Cast<ICollectItem>(Item))
	{
		CollectItem->OnCollectItem.AddLambda([this, Character](AActor* LocationMarker, AActor* OverlappedActor)
		{
			if(bCanBeCompleted && Character == OverlappedActor)
			{
				bIsCompleted = true;
				if(OnObjectiveCompleted.IsBound())
				{
					OnObjectiveCompleted.Broadcast(this);
				}
			}
		});
	}
}

AActor* UCollectObjective::GetActor()
{
	return Item;
}
