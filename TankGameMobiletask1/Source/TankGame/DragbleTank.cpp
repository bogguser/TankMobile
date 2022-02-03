// Fill out your copyright notice in the Description page of Project Settings.


#include "DragbleTank.h"
#include "DragDropTankOperation.h"

#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Components/VerticalBox.h"
#include "Components/VerticalBoxSlot.h"

void UDragbleTank::NativePreConstruct()
{
	Super::NativePreConstruct();

	if(TankNameText)
	{
		TankNameText->SetText(TankName);
	}
}

FReply UDragbleTank::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	if(InMouseEvent.IsMouseButtonDown(EKeys::LeftMouseButton))
	{
		return UWidgetBlueprintLibrary::DetectDragIfPressed(InMouseEvent,this, EKeys::LeftMouseButton).NativeReply;
	}
	return FReply::Handled();
}

void UDragbleTank::NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation)
{
	UDragDropTankOperation* NewOperation = Cast<UDragDropTankOperation>(UWidgetBlueprintLibrary::CreateDragDropOperation(UDragDropTankOperation::StaticClass()));
	if (NewOperation)
	{
		NewOperation->TankName = TankName;
		NewOperation->DefaultDragVisual = this;

		SetColorAndOpacity(FLinearColor(1.f, 1.f,1.f, 0.6f));
		SetVisibility(ESlateVisibility::HitTestInvisible);

		NewOperation->OnDragCancelled.AddDynamic(this,&UDragbleTank::OnDragCancelledFunc);
		
		OutOperation = NewOperation;
	}
}

bool UDragbleTank::NativeOnDragOver(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	UVerticalBox* Holder = Cast<UVerticalBox>(GetParent());
	if(InOperation && InOperation->DefaultDragVisual && InOperation->DefaultDragVisual != this && Holder)
	{
		int32 NewIndex = Holder->GetChildIndex(InOperation->DefaultDragVisual);
		if(NewIndex >= 0)
		{
			Holder->RemoveChildAt(NewIndex);

			TArray<UWidget*> Children = Holder->GetAllChildren();
			Holder->ClearChildren();
			for(int32 i = 0; i < Children.Num(); i++)
			{
				
				Holder->AddChildToVerticalBox(Children[i])->SetHorizontalAlignment(EHorizontalAlignment::HAlign_Center);
				if(Children[i] == this)
				{
					Holder->AddChildToVerticalBox(InOperation->DefaultDragVisual)->SetHorizontalAlignment(EHorizontalAlignment::HAlign_Center);
				}
			}
			return true;
		}
	}
	return false;
}

bool UDragbleTank::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	if(InOperation && InOperation->OnDragCancelled.IsBound())
	{
		InOperation->OnDragCancelled.Broadcast(InOperation);
		return true;
	}
	return false;
}

void UDragbleTank::OnDragCancelledFunc(UDragDropOperation* Operation)
{
	SetColorAndOpacity(FLinearColor(1.f, 1.f,1.f, 1.f));
	SetVisibility(ESlateVisibility::Visible);
}
