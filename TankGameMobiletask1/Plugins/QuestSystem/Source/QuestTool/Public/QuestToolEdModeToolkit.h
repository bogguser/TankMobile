// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Toolkits/BaseToolkit.h"

FSimpleDelegate(FColorChange);

class FQuestToolEdModeToolkit : public FModeToolkit
{
public:

	FQuestToolEdModeToolkit();
	
	/** FModeToolkit interface */
	virtual void Init(const TSharedPtr<IToolkitHost>& InitToolkitHost) override;

	/** IToolkit interface */
	virtual FName GetToolkitFName() const override;
	virtual FText GetBaseToolkitName() const override;
	virtual class FEdMode* GetEditorMode() const override;
	virtual TSharedPtr<class SWidget> GetInlineContent() const override { return ToolkitWidget; }

	FOnLinearColorValueChanged const LinearColorValueChanged;
private:

	TSharedPtr<SWidget> ToolkitWidget;
};
