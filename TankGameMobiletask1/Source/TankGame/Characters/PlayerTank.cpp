#include "PlayerTank.h"
#include "DrawDebugHelpers.h"
#include "UMediaPlayer.h"
#include "Components/StaticMeshComponent.h"
#include "Camera/CameraComponent.h"
#include "Math/Rotator.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "Components/ArrowComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "TankGame/Player/TankPlayerController.h"

APlayerTank::APlayerTank()
{
	PrimaryActorTick.bCanEverTick = true;

	
	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>("SpringArmComponent");
	SpringArmComponent->SetupAttachment(BodyMesh);

	QuestListComponent = CreateDefaultSubobject<UQuestListComponent>("QuestListComponent");

	CameraComponent = CreateDefaultSubobject<UCameraComponent>("CameraComponent");
	CameraComponent->SetupAttachment(SpringArmComponent);

	MovementComponent = CreateDefaultSubobject<UFloatingPawnMovement>("MovementComponent");;
}


void APlayerTank::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// ProccesMovement(DeltaTime, MoveForwardInput);
	//
	FRotator TargetActorRotation = GetActorRotation();
	if(!FMath::IsNearlyZero(MoveRightInput))
	{
		TargetActorRotation = UKismetMathLibrary::MakeRotFromX(GetActorRightVector() * MoveRightInput);
	}
	
	ProccesRotation(DeltaTime, TargetActorRotation);
	ProccesTurretRotation(DeltaTime);
}

void APlayerTank::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &APlayerTank::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &APlayerTank::MoveRight);
	PlayerInputComponent->BindAction(TEXT("Fire"),EInputEvent::IE_Pressed, this, &APlayerTank::Fire);
	PlayerInputComponent->BindAction(TEXT("ChangeGun"),EInputEvent::IE_Pressed, this, &APlayerTank::ChangeGun);
	PlayerInputComponent->BindAction(TEXT("StartFire"),EInputEvent::IE_Pressed, this, &APlayerTank::StartFire);
	PlayerInputComponent->BindAction(TEXT("StopFire"),EInputEvent::IE_Pressed, this, &APlayerTank::StopFire);
	PlayerInputComponent->BindAction(TEXT("OpenMediaWidget"),EInputEvent::IE_Pressed, this, &APlayerTank::OpenWidget);
	
}

void APlayerTank::OpenWidget()
{
	
	MediaPlayerWidget = CreateWidget<UUMediaPlayer>(GetWorld(), MediaPlayerSub);
	MediaPlayerWidget->AddToViewport();

	UWorld* World = GetWorld();

	APlayerController* PlayerController = World->GetFirstPlayerController();

	FInputModeUIOnly InputModeData;
	InputModeData.SetWidgetToFocus(MediaPlayerWidget->TakeWidget());
	InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);

	PlayerController->SetInputMode(InputModeData);

	PlayerController->bShowMouseCursor = true;
	PlayerController->SetPause(true);
	
}


void APlayerTank::MoveForward(float AxisValue)
{
	//MoveForwardInput = AxisValue;
	if (AxisValue != 0.0f)
    	{
    		// add movement in that direction
    		AddMovementInput(GetActorForwardVector(), AxisValue);
    	}
	
}

void APlayerTank::MoveRight(float AxisValue)
{
	MoveRightInput = AxisValue;
	//AddMovementInput(GetActorRightVector(), AxisValue);
}

void APlayerTank::ChangeGun()
{
	TSubclassOf<AGun> Medium = DefaultGunClass;
	DefaultGunClass = TwoGunClass;
	TwoGunClass = Medium;
	int ProjectileShellP = Gun->ProjectileShell;
	int LineShellP = Gun->LineShell;
	int BounceShellP = Gun->BounceShell;
	SetupGun(DefaultGunClass);
	Gun->ProjectileShell = ProjectileShellP;
	Gun->LineShell = LineShellP;
	Gun->BounceShell = BounceShellP;
}

void APlayerTank::ProccesTurretRotation(float DeltaTime)
{
	if (Gun != nullptr)
	{
		auto PlayerTankController = Cast<ATankPlayerController>(GetController());
		if (PlayerTankController != nullptr)
		{
			FVector RawMousePosition = PlayerTankController->GetWorldMousePosition();

			FVector CorrectMousePosition = CameraComponent->GetComponentLocation() + (RawMousePosition - CameraComponent->GetComponentLocation()).GetSafeNormal() * 750.f;
			CorrectMousePosition.Z = GunPoint->GetComponentLocation().Z;

			FRotator TargetTurretRotation = UKismetMathLibrary::FindLookAtRotation(GunPoint->GetComponentLocation(),CorrectMousePosition);
			TurretRotationTo(CorrectMousePosition, DeltaTime);
		}
	}
	
}







 

