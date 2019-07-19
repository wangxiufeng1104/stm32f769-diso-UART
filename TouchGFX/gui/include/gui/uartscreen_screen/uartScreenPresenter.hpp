#ifndef UARTSCREEN_PRESENTER_HPP
#define UARTSCREEN_PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class uartScreenView;

class uartScreenPresenter : public Presenter, public ModelListener
{
public:
    uartScreenPresenter(uartScreenView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~uartScreenPresenter() {};

private:
    uartScreenPresenter();

    uartScreenView& view;
};


#endif // UARTSCREEN_PRESENTER_HPP
