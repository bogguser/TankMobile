#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

UCLASS()
class TANKGAME_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	ATankPlayerController(const FObjectInitializer& Obj);
	virtual void SetupInputComponent() override;
	
	FVector GetWorldMousePosition() const;

	FSimpleMulticastDelegate OnLeftMouseButtonUpEvent;
};
