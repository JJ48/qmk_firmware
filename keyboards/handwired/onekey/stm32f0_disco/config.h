/* Copyright 2019
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

#include "config_common.h"

#define PRODUCT Onekey STM32F072 Discovery

#define MATRIX_COL_PINS { B4 }
#define MATRIX_ROW_PINS { B5 }

#define BACKLIGHT_PIN         C8
#define BACKLIGHT_PWM_DRIVER  PWMD3
#define BACKLIGHT_PWM_CHANNEL 3
#define BACKLIGHT_PAL_MODE    0

#define RGB_DI_PIN B15

#define ADC_PIN A0
