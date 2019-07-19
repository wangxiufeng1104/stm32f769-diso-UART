#include <gui/ledscreen_screen/ledScreenView.hpp>
#include <gui/common/UserBoardPara.hpp>
ledScreenView::ledScreenView()
{

}

void ledScreenView::setupScreen()
{
    ledScreenViewBase::setupScreen();
}

void ledScreenView::tearDownScreen()
{
    ledScreenViewBase::tearDownScreen();
}

void ledScreenView::red_buttonclick()
{
    presenter->set_light_toggle(UBP_REDLIGHT_TOGGLE);
}

void ledScreenView::green_buttonclick()
{
  presenter->set_light_toggle(UBP_GREENLIGHT_TOGGLE);
}
