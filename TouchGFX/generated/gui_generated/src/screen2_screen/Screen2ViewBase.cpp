/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen2_screen/Screen2ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <images/BitmapDatabase.hpp>

Screen2ViewBase::Screen2ViewBase() :
    flexButtonCallback(this, &Screen2ViewBase::flexButtonCallbackHandler)
{
    __background.setPosition(0, 0, 240, 320);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    tempSettingTxt.setXY(102, 165);
    tempSettingTxt.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    tempSettingTxt.setLinespacing(0);
    Unicode::snprintf(tempSettingTxtBuffer, TEMPSETTINGTXT_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_1BAY).getText());
    tempSettingTxt.setWildcard(tempSettingTxtBuffer);
    tempSettingTxt.resizeToCurrentText();
    tempSettingTxt.setTypedText(touchgfx::TypedText(T___SINGLEUSE_UCE8));
    add(tempSettingTxt);

    decreaseBtn.setBoxWithBorderPosition(0, 0, 50, 50);
    decreaseBtn.setBorderSize(0);
    decreaseBtn.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(255, 255, 255), touchgfx::Color::getColorFromRGB(255, 255, 255), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    decreaseBtn.setIconBitmaps(Bitmap(BITMAP_ICON_THEME_IMAGES_HARDWARE_KEYBOARD_ARROW_LEFT_50_50_000000_SVG_ID), Bitmap(BITMAP_ICON_THEME_IMAGES_HARDWARE_KEYBOARD_ARROW_LEFT_50_50_000000_SVG_ID));
    decreaseBtn.setIconXY(0, 0);
    decreaseBtn.setAction(flexButtonCallback);
    decreaseBtn.setPosition(20, 163, 45, 44);
    add(decreaseBtn);

    increaseBtn.setBoxWithBorderPosition(0, 0, 50, 50);
    increaseBtn.setBorderSize(0);
    increaseBtn.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(255, 255, 255), touchgfx::Color::getColorFromRGB(255, 255, 255), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    increaseBtn.setIconBitmaps(Bitmap(BITMAP_ICON_THEME_IMAGES_HARDWARE_KEYBOARD_ARROW_RIGHT_50_50_000000_SVG_ID), Bitmap(BITMAP_ICON_THEME_IMAGES_HARDWARE_KEYBOARD_ARROW_RIGHT_50_50_000000_SVG_ID));
    increaseBtn.setIconXY(0, 0);
    increaseBtn.setAction(flexButtonCallback);
    increaseBtn.setPosition(177, 163, 45, 44);
    add(increaseBtn);

    tempTxt.setXY(120, 113);
    tempTxt.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    tempTxt.setLinespacing(0);
    Unicode::snprintf(tempTxtBuffer, TEMPTXT_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_MRSL).getText());
    tempTxt.setWildcard(tempTxtBuffer);
    tempTxt.resizeToCurrentText();
    tempTxt.setTypedText(touchgfx::TypedText(T___SINGLEUSE_FBV3));
    add(tempTxt);

    textArea2.setXY(44, 68);
    textArea2.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea2.setLinespacing(0);
    textArea2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_60SS));
    add(textArea2);

    textArea2_1.setXY(42, 113);
    textArea2_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea2_1.setLinespacing(0);
    textArea2_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_W8LO));
    add(textArea2_1);

    onTxt.setXY(112, 68);
    onTxt.setColor(touchgfx::Color::getColorFromRGB(101, 196, 33));
    onTxt.setLinespacing(0);
    onTxt.setTypedText(touchgfx::TypedText(T___SINGLEUSE_FDT9));
    onTxt.setVisible(false);
    add(onTxt);

    offTxt.setXY(112, 68);
    offTxt.setColor(touchgfx::Color::getColorFromRGB(194, 33, 33));
    offTxt.setLinespacing(0);
    offTxt.setTypedText(touchgfx::TypedText(T___SINGLEUSE_ZEAQ));
    offTxt.setVisible(false);
    add(offTxt);

    textArea1.setXY(41, 12);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(5, 47, 255));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_1QCH));
    add(textArea1);

    flexButton1.setIconBitmaps(Bitmap(BITMAP_BLUE_ICONS_HOME_32_ID), Bitmap(BITMAP_BLUE_ICONS_HOME_32_ID));
    flexButton1.setIconXY(0, 0);
    flexButton1.setAction(flexButtonCallback);
    flexButton1.setPosition(204, 282, 32, 32);
    add(flexButton1);
}

Screen2ViewBase::~Screen2ViewBase()
{

}

void Screen2ViewBase::setupScreen()
{

}

void Screen2ViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &flexButton1)
    {
        //Interaction1
        //When flexButton1 clicked change screen to Screen1
        //Go to Screen1 with screen transition towards East
        application().gotoScreen1ScreenWipeTransitionEast();
    }
    if (&src == &increaseBtn)
    {
        //Interaction2
        //When increaseBtn clicked call virtual function
        //Call increaseTemp
        increaseTemp();
    }
    if (&src == &decreaseBtn)
    {
        //Interaction3
        //When decreaseBtn clicked call virtual function
        //Call decreaseTemp
        decreaseTemp();
    }
}
