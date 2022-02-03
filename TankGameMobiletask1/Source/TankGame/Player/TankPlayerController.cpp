#include "TankPlayerController.h"

#include "Components/WidgetInteractionComponent.h"

ATankPlayerController::ATankPlayerController(const FObjectInitializer& Obj) : Super(Obj)
{
	bShowMouseCursor = false;
	bEnableClickEvents = true;
}

void ATankPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
}

FVector ATankPlayerController::GetWorldMousePosition() const
{
	FVector MousePosition, MouseDirection;
	DeprojectMousePositionToWorld(MousePosition,MouseDirection);
	
	return MousePosition;
}



