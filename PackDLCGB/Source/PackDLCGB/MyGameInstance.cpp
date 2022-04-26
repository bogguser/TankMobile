// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"

TArray<FMapInfo> UMyGameInstance::GetMapsInfo()
{
	return _DLCLoader->GetMapsInfo();
}
void UMyGameInstance::Init()
{
	_DLCLoader = NewObject<UDLCLoader>(this,"DLC_Loader");
}