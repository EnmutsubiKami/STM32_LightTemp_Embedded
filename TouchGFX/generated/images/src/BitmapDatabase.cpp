// 4.24.1 0x8bb3440b
// Generated by imageconverter. Please, do not edit!

#include <images/BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_alternate_theme_images_widgets_togglebutton_medium_round_small_off_light[]; // BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_TOGGLEBUTTON_MEDIUM_ROUND_SMALL_OFF_LIGHT_ID = 0, Size: 84x50 pixels
extern const unsigned char image_alternate_theme_images_widgets_togglebutton_medium_round_small_on_active[]; // BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_TOGGLEBUTTON_MEDIUM_ROUND_SMALL_ON_ACTIVE_ID = 1, Size: 84x50 pixels
extern const unsigned char image_blue_icons_home_32[]; // BITMAP_BLUE_ICONS_HOME_32_ID = 2, Size: 30x29 pixels
extern const unsigned char image_icon_theme_images_hardware_keyboard_arrow_left_50_50_000000_svg[]; // BITMAP_ICON_THEME_IMAGES_HARDWARE_KEYBOARD_ARROW_LEFT_50_50_000000_SVG_ID = 3, Size: 50x50 pixels
extern const unsigned char image_icon_theme_images_hardware_keyboard_arrow_right_50_50_000000_svg[]; // BITMAP_ICON_THEME_IMAGES_HARDWARE_KEYBOARD_ARROW_RIGHT_50_50_000000_SVG_ID = 4, Size: 50x50 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] = {
    { image_alternate_theme_images_widgets_togglebutton_medium_round_small_off_light, 0, 84, 50, 13, 13, 24, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 24, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_alternate_theme_images_widgets_togglebutton_medium_round_small_on_active, 0, 84, 50, 47, 13, 24, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 24, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_icons_home_32, 0, 30, 29, 23, 9, 3, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 20, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_icon_theme_images_hardware_keyboard_arrow_left_50_50_000000_svg, 0, 50, 50, 19, 21, 2, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 6, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_icon_theme_images_hardware_keyboard_arrow_right_50_50_000000_svg, 0, 50, 50, 27, 22, 3, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 4, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}

uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
} // namespace BitmapDatabase
