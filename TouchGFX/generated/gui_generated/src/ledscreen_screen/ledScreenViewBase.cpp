/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/ledscreen_screen/ledScreenViewBase.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Color.hpp>

ledScreenViewBase::ledScreenViewBase() :
    buttonCallback(this, &ledScreenViewBase::buttonCallbackHandler)
{
    image.setXY(0, 0);
    image.setBitmap(Bitmap(BITMAP_BG_ID));

    redbutton.setXY(92, 210);
    redbutton.setBitmaps(Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));
    redbutton.setLabelText(TypedText(T_SINGLEUSEID1));
    redbutton.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    redbutton.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    redbutton.setAction(buttonCallback);

    greenbutton.setXY(493, 210);
    greenbutton.setBitmaps(Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_ID), Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID));
    greenbutton.setLabelText(TypedText(T_SINGLEUSEID2));
    greenbutton.setLabelColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    greenbutton.setLabelColorPressed(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    greenbutton.setAction(buttonCallback);

    add(image);
    add(redbutton);
    add(greenbutton);
}

void ledScreenViewBase::setupScreen()
{

}

void ledScreenViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &redbutton)
    {
        //redclick
        //When redbutton clicked call virtual function
        //Call red_buttonclick
        red_buttonclick();
    }
    else if (&src == &greenbutton)
    {
        //greenclick
        //When greenbutton clicked call virtual function
        //Call green_buttonclick
        green_buttonclick();
    }
}
