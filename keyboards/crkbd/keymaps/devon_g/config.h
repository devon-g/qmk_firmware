/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#ifdef RGB_MATRIX_ENABLE
#    define RGB_MATRIX_SLEEP
#    define ENABLE_RGB_MATRIX_SOLID_COLOR         // Static single hue, no speed support
#    define ENABLE_RGB_MATRIX_ALPHAS_MODS         // Static dual hue, speed is hue for secondary hue
#    define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN    // Static gradient top to bottom, speed controls how much gradient changes
#    define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT // Static gradient left to right, speed controls how much gradient changes
#endif

#define EE_HANDS // Sets EEPROM flag when flashing to determine left/right split
#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_OLED_ENABLE
#define SPLIT_WPM_ENABLE

// Free up space by disabling unused features
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_ACTION_ONESHOT
