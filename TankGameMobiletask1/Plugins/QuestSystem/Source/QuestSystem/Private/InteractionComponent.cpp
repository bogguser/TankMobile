// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractionComponent.h"

#include "IInteractableObject.h"
#include "Blueprint/UserWidget.h"

void UInteractionComponent::BeginPlay()
{
	Super::BeginPlay();

	OnComponentBeginOverlap.AddDynamic(this, &UInteractionComponent::OnInteractionCompBeginOverlap);
	OnComponentEndOverlap.AddDynamic(this, &UInteractionComponent::OnInteractionCompEndOverlap);
}

void UInteractionComponent::Interact()
{
	if(ActorToInteract)
	{
		IIInteractableObject::Execute_Interact(ActorToInteract, GetOwner());
	}
}

void UInteractionComponent::OnInteractionCompBeginOverlap(UPrimitiveComponent* OverLappedComponent, AActor* OtherActor,
                                                          UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(OtherActor->Implements<UIInteractableObject>())
	{
		ActorToInteract = OtherActor;
		if(!InteractMessage)
		{
			if(InteractMessageClass)
			{
				InteractMessage = CreateWidget<UUserWidget>(GetWorld(), InteractMessageClass);
			}
		}

		if(InteractMessage && !InteractMessage->IsInViewport())
		{
			InteractMessage->AddToViewport();
		}
	}
}

void UInteractionComponent::OnInteractionCompEndOverlap(UPrimitiveComponent* OverLappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if(OtherActor == ActorToInteract)
	{
		ActorToInteract = nullptr;
		if(InteractMessage)
		{
			InteractMessage->RemoveFromViewport();
		}
	}
}
