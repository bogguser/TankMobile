#pragma once
#include "IInteractableObject.h"
#include "InteractableActor.generated.h"

UCLASS()
class QUESTSYSTEM_API AInteractableActor : public AActor, public IIInteractableObject
{
	GENERATED_BODY()
public:
	
	UFUNCTION(BlueprintCallable, Category= "Quest System")
	void OnInteractionFinished(AActor* ActorInteractedWithObject)
	{
		NotifyInteractionFinished(this, ActorInteractedWithObject);
	}
};