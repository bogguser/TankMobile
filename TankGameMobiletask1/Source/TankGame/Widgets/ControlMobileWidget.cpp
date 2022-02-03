// Fill out your copyright notice in the Description page of Project Settings.


#include "ControlMobileWidget.h"

#include "TankGame/Characters/PlayerTank.h"
#include "Actor.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"


void UControlMobileWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (BtnUp)
	{
		BtnUp->OnPressed.AddDynamic(this, &UControlMobileWidget::OnBtnUpPressed);
		BtnUp->OnReleased.AddDynamic(this, &UControlMobileWidget::OnBtnUpReleased);
	}
	
	if (BtnDown)
	{
		BtnDown->OnPressed.AddDynamic(this, &UControlMobileWidget::OnBtnDownPressed);
		BtnDown->OnReleased.AddDynamic(this, &UControlMobileWidget::OnBtnDownReleased);
	}
	
	if (BtnLeft)
	{
		BtnLeft->OnPressed.AddDynamic(this, &UControlMobileWidget::OnBtnLeftPressed);
		BtnLeft->OnReleased.AddDynamic(this, &UControlMobileWidget::OnBtnLeftReleased);
	}
	
	if (BtnRight)
	{
		BtnRight->OnPressed.AddDynamic(this, &UControlMobileWidget::OnBtnRightPressed);
		BtnRight->OnReleased.AddDynamic(this, &UControlMobileWidget::OnBtnRightReleased);
	}
	
	if (BtnFire)
	{
		BtnFire->OnPressed.AddDynamic(this, &UControlMobileWidget::OnBtnFireClicked);
	}
	
}

void UControlMobileWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	if(MoveUpPressed)
	{
		APlayerTank* Player =  Cast<APlayerTank>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
		if(Player != nullptr)
		{
			Player->MoveForward(1.0f);
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("UControlMobileWidget::OnBtnUpClicked(): Player == nullptr) !"));
		}
	}

	if(MoveDownPressed)
	{
		APlayerTank* Player =  Cast<APlayerTank>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
		if(Player != nullptr)
		{
			Player->MoveForward(-1.0f);
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("UControlMobileWidget::OnBtnUpClicked(): Player == nullptr) !"));
		}
	}

	if(MoveRightPressed)
	{
		APlayerTank* Player =  Cast<APlayerTank>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
		if(Player != nullptr)
		{
			FRotator TargetActorRotation = Player->GetActorRotation();
			TargetActorRotation = UKismetMathLibrary::MakeRotFromX(Player->GetActorRightVector() * 1.0f);
			Player->ProccesRotation(InDeltaTime, TargetActorRotation);
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("UControlMobileWidget::OnBtnUpClicked(): Player == nullptr) !"));
		}
	}

	if(MoveLeftPressed)
	{
		APlayerTank* Player =  Cast<APlayerTank>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
		if(Player != nullptr)
		{
			FRotator TargetActorRotation = Player->GetActorRotation();
			TargetActorRotation = UKismetMathLibrary::MakeRotFromX(Player->GetActorRightVector() * -1.0f);
			Player->ProccesRotation(InDeltaTime, TargetActorRotation);
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("UControlMobileWidget::OnBtnUpClicked(): Player == nullptr) !"));
		}
	}
	
}

void UControlMobileWidget::OnBtnUpPressed()
{
	APlayerTank* Player =  Cast<APlayerTank>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	if(Player != nullptr)
	{
		MoveUpPressed = true;
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("UControlMobileWidget::OnBtnUpClicked(): Player == nullptr) !"));
	}
	
}

void UControlMobileWidget::OnBtnUpReleased()
{
	APlayerTank* Player =  Cast<APlayerTank>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	if(Player != nullptr)
	{
		MoveUpPressed = false;
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("UControlMobileWidget::OnBtnUpClicked(): Player == nullptr) !"));
	}
}

void UControlMobileWidget::OnBtnDownReleased()
{
	APlayerTank* Player =  Cast<APlayerTank>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	if(Player != nullptr)
	{
		MoveDownPressed = false;
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("UControlMobileWidget::OnBtnUpClicked(): Player == nullptr) !"));
	}
}

void UControlMobileWidget::OnBtnRightReleased()
{
	APlayerTank* Player =  Cast<APlayerTank>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	if(Player != nullptr)
	{
		MoveRightPressed = false;
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("UControlMobileWidget::OnBtnUpClicked(): Player == nullptr) !"));
	}
}

void UControlMobileWidget::OnBtnLeftReleased()
{
	APlayerTank* Player =  Cast<APlayerTank>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	if(Player != nullptr)
	{
		MoveLeftPressed = false;
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("UControlMobileWidget::OnBtnUpClicked(): Player == nullptr) !"));
	}
}

void UControlMobileWidget::OnBtnDownPressed()
{
	APlayerTank* Player =  Cast<APlayerTank>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	if(Player != nullptr)
	{
		MoveDownPressed = true;
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("UControlMobileWidget::OnBtnUpClicked(): Player == nullptr) !"));
	}
}

void UControlMobileWidget::OnBtnLeftPressed()
{
	APlayerTank* Player =  Cast<APlayerTank>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	if(Player != nullptr)
	{
		MoveLeftPressed = true;
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("UControlMobileWidget::OnBtnUpClicked(): Player == nullptr) !"));
	}
}

void UControlMobileWidget::OnBtnRightPressed()
{
	APlayerTank* Player =  Cast<APlayerTank>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	if(Player != nullptr)
	{
		MoveRightPressed = true;
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("UControlMobileWidget::OnBtnUpClicked(): Player == nullptr) !"));
	}
}

void UControlMobileWidget::OnBtnFireClicked()
{
	APlayerTank* Player =  Cast<APlayerTank>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	if(Player != nullptr)
	{
		Player->Fire();
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("UControlMobileWidget::OnBtnUpClicked(): Player == nullptr) !"));
	}
}
