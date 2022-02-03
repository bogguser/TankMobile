// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"

/**
 * 
 */
class STANDALONEWINDOWQUEST_API SQuestSystemEditor : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SQuestSystemEditor)
	{}
	SLATE_END_ARGS()

	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs);

private:
	FReply RefreshButton();

	TSharedPtr<class SScrollBox> QuestList;
	
};
