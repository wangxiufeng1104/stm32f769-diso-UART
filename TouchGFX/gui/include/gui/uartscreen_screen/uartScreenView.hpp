#ifndef UARTSCREEN_VIEW_HPP
#define UARTSCREEN_VIEW_HPP

#include <gui_generated/uartscreen_screen/uartScreenViewBase.hpp>
#include <gui/uartscreen_screen/uartScreenPresenter.hpp>

class uartScreenView : public uartScreenViewBase
{
public:
    uartScreenView();
    virtual ~uartScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // UARTSCREEN_VIEW_HPP
