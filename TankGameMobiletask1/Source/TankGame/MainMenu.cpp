#include "MainMenu.h"
#include "SPlayerHealthBars.h"
#include "StyleSet.h"
#include "Widgets/ProgressBarWidgetStyle.h"

void UMainMenu::NativePreConstruct()
{
    if (PlayerHealthWidget)
    {
        PlayerHealthWidget->WidgetStyle = FStyleSet::Get().GetWidgetStyle<FProgressBarStyl>("WS_ProgressBarHealthStyle");
    }

    if (NewGameBtn)
    {
        NewGameBtn->SetBackgroundColor(FStyleSet::Get().GetColor("Red"));
    }

    Super::NativePreConstruct();
}

void UMainMenu::NativeConstruct()
{
    Super::NativeConstruct();

    if (NewGameBtn)
    {
        NewGameBtn->OnPressed.AddDynamic(this, &UMainMenu::OnNewGameClicked);
    }

    if (PlayerHealthWidget)
    {
        //RadioButtonsHolder->SetContent(SNew(SMainMenu).PlayerImage(PlayerImage));
    }
}

void UMainMenu::OnNewGameClicked()
{
    // start new game
}
