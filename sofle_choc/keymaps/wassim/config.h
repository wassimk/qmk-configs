/* Copyright 2023 Brian Low
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

// Plug USB into the left half of the keyboard
// see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
#define MASTER_RIGHT

#ifdef RGB_MATRIX_ENABLE
#define RGB_DISABLE_WHEN_USB_SUSPENDED     // turn off effects when suspended
#define SPLIT_TRANSPORT_MIRROR             // If LED_MATRIX_KEYPRESSES or LED_MATRIX_KEYRELEASES is enabled, you also will want to enable SPLIT_TRANSPORT_MIRROR
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 100  // limits maximum brightness of LEDs (max 255). Higher may cause the controller to crash.

// Enable animations
#define RGBLIGHT_DEFAULT_MODE RGB_MATRIX_GRADIENT_LEFT_RIGHT
#define RGBLIGHT_DEFAULT_HUE 5
#define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#define ENABLE_RGB_MATRIX_HUE_BREATHING
#define ENABLE_RGB_MATRIX_HUE_WAVE
#define ENABLE_RGB_MATRIX_RAINBOW_BEACON
#define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#endif
