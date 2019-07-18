#ifndef LEDSCREEN_VIEW_HPP
#define LEDSCREEN_VIEW_HPP

#include <gui_generated/ledscreen_screen/ledScreenViewBase.hpp>
#include <gui/ledscreen_screen/ledScreenPresenter.hpp>

class ledScreenView : public ledScreenViewBase
{
public:
    ledScreenView();
    virtual ~ledScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // LEDSCREEN_VIEW_HPP
