// Fill out your copyright notice in the Description page of Project Settings.


#include "TurretSpawnerWidget.h"

#include "Kismet/GameplayStatics.h"


void UTurretSpawnerWidget::NativeConstruct()
{
	Super::NativeConstruct();
	PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	ATankPlayerController* OurController = Cast <ATankPlayerController> (PlayerController);
	if (OurController)
	{
		OurController->OnLeftMouseButtonUpEvent.AddUObject(this, &UTurretSpawnerWidget::OnMouseButtonUp);
	}
}

void UTurretSpawnerWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
	if(SpawnedActor && PlayerController)
	{
		FVector Location;
		FVector Duration;
		PlayerController->DeprojectMousePositionToWorld(Location, Duration);
		FCollisionQueryParams Params = FCollisionQueryParams::DefaultQueryParam;
		Params.AddIgnoredActor(SpawnedActor);
		Params.AddIgnoredActor(PlayerController->GetPawn());
		FHitResult HitResult;
		GetWorld()->LineTraceSingleByChannel(HitResult, Location, Location + Duration * 10000.f, ECollisionChannel::ECC_WorldStatic, Params);

		if(HitResult.Actor.IsValid())
		{
			SpawnedActor->SetActorLocation(HitResult.Location);
		}
	}
}

FReply UTurretSpawnerWidget::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	if(InMouseEvent.IsMouseButtonDown(EKeys::LeftMouseButton))
	{
		SpawnedActor = GetWorld()->SpawnActor(SpawnedClass);
	}
	return  FReply::Handled();
}

void UTurretSpawnerWidget::OnMouseButtonUp()
{
	if(SpawnedActor)
	{
		SpawnedActor = nullptr;
		
	}
}
