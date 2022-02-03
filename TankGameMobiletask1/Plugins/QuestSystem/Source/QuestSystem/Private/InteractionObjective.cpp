// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractionObjective.h"

#include "IInteractableObject.h"

UInteractionObjective::UInteractionObjective()
{
	Type = EObjectiveType::Interact;
}

void UInteractionObjective::ActivateObjective(AActor* Character)
{
	if(IIInteractableObject* InteractableTarget = Cast<IIInteractableObject>(Target))
	{
		InteractableTarget->OnInteractionFinished.AddLambda([this, Character](AActor* InteractableObject, AActor* ActorInteractedWithObject)
		{
			if(bCanBeCompleted && Character == ActorInteractedWithObject)
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

AActor* UInteractionObjective::GetActor()
{
	return Target;
}
