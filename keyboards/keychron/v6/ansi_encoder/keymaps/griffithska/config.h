/* 
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
 
 /* Enable NUM_LOCK_LED_INDEX */
//#define NUM_LOCK_LED_INDEX 37

 //#define USB_POLLING_INTERVAL_MS 10       //in keyboard.json
 //#define USB_SUSPEND_WAKEUP_DELAY 200     //in keyboard.json

 #define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD
 #define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
 
 //lighting
 #define RGB_MATRIX_SLEEP                           // turn off effects when suspended
 #define RGB_MATRIX_KEYPRESSES                      // reacts to keypresses
 #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
 //#define ENABLE_RGB_MATRIX_SPLASH
 //#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
 //#define ENABLE_RGB_MATRIX_MULTISPLASH
 #define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT      // Static gradient left to right, speed controls how much gradient changes
 #define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN         // Static gradient top to bottom, speed controls how much gradient changes