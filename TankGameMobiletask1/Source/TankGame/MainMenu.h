#include "CoreMinimal.h"

#include "PlayerHealthBars.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/NativeWidgetHost.h"
#include "Animation/WidgetAnimation.h"
#include "Components/ProgressBar.h"

#include "MainMenu.generated.h"

/**
 * 
 */
UCLASS()
class TANKGAME_API UMainMenu : public UUserWidget
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	UNativeWidgetHost* ProgressBarHolder;

	//UPROPERTY(EditAnywhere)
	//UTexture2D* PlayerImage;

	virtual void NativePreConstruct() override;

	virtual void NativeConstruct() override;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	UPlayerHealthBars* PlayerHealthWidget;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	UButton* NewGameBtn;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	UButton* LoadGameBtn;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	UButton* OptionsBtn;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	UButton* ExitBtn;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetAnim))
	UWidgetAnimation* TestAnimation;

	UFUNCTION()
	void OnNewGameClicked();
};
