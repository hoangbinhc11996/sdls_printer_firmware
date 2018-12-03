/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Tongue-in-cheek placeholder for a more Marlin-specific bitmap
 * The joke is that every "CR-10" has different branding!
 * Made using The Gimp and...
 *  - http://www.digole.com/tools/PicturetoC_Hex_converter.php
 */
#include <avr/pgmspace.h>

#define CUSTOM_BOOTSCREEN_TIMEOUT   5000
#define CUSTOM_BOOTSCREEN_BMPWIDTH  128
#define CUSTOM_BOOTSCREEN_BMPHEIGHT 64

const unsigned char custom_start_bmp[1206] PROGMEM = {
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00111111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B01111000,B00000000,B01111111,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000001,B11111100,B00000000,B01111111,B11111100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000011,B11111100,B00000000,B11111111,B11111100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000111,B11111110,B00000000,B11111111,B11111100,B00000011,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000111,B11111100,B00000001,B11111111,B11111110,B00000011,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000111,B11111110,B00000011,B10011111,B11111111,B10000011,B11110000,B00000000,B00000011,B11000111,B00111000,B11110011,B11100111,B11100000,B00000001,
  B10000000,B00000011,B11111111,B00111111,B00000000,B00000111,B11111111,B11110000,B00000000,B00000111,B11101111,B11111101,B11111011,B11110111,B11100000,B00000001,
  B10000000,B00000000,B00000111,B11111110,B00000000,B00001111,B11111111,B11110000,B00000000,B00000110,B01101100,B11001101,B10011011,B00110001,B10000000,B00000001,
  B10000000,B00000000,B00000111,B11111111,B11000000,B00001111,B11111110,B00000000,B00000000,B00000110,B01101100,B11001101,B10011011,B00110001,B10000000,B00000001,
  B10000000,B00000000,B00000111,B11111111,B11111111,B11111111,B11111111,B00000000,B00000000,B00000110,B00001100,B11001101,B10011011,B01110001,B10000000,B00000001,
  B10000000,B00000000,B00000111,B11111111,B11111111,B11111111,B11111111,B10000000,B00000000,B00000111,B11001100,B11001101,B11111011,B11100001,B10000000,B00000001,
  B10000000,B00000000,B00000111,B11111111,B11111111,B11111111,B11111111,B00000000,B00000000,B00000011,B11101100,B11001101,B11111011,B11100001,B10000000,B00000001,
  B10000000,B00000000,B00011111,B11111111,B11000000,B00011111,B11111111,B10000000,B00000000,B00000000,B01101100,B11001101,B10011011,B01110001,B10000000,B00000001,
  B10000000,B00000000,B11111111,B11111111,B11000000,B00001111,B11111111,B11100000,B00000000,B00000110,B01101100,B11001101,B10011011,B00110001,B10000000,B00000001,
  B10000000,B00001111,B11111111,B11111111,B11000000,B00000111,B11111111,B11111000,B00000000,B00000111,B11101100,B11001101,B10011011,B00111001,B10000000,B00000001,
  B10000000,B00111111,B11000001,B11111110,B00000000,B00000111,B11111100,B01111100,B00000000,B00000011,B11001100,B11001101,B10011011,B00011001,B10000000,B00000001,
  B10000000,B01111111,B11100000,B01111000,B00000000,B00000000,B01111000,B00011111,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B11111111,B11100000,B11110000,B00000000,B00000000,B00111000,B00001111,B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B11111111,B11100000,B11100000,B00000000,B00000000,B00111000,B00011111,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000001,B11111111,B11100000,B11100000,B00000000,B00000000,B00111000,B00011111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000001,B11111111,B11100000,B11100000,B00000000,B00000000,B00111000,B00011111,B11100000,B00000111,B11001111,B11001111,B00110011,B11000111,B11000000,B00000001,
  B10000001,B11111111,B11100000,B11100000,B00000000,B00000000,B00011000,B00011111,B11100000,B00000111,B11101111,B11011111,B10110111,B11100111,B11100000,B00000001,
  B10000001,B11111111,B11000000,B11100000,B00000000,B00000000,B00011000,B00011111,B11100000,B00000110,B01101100,B00011001,B10110110,B01100110,B01100000,B00000001,
  B10000001,B11111111,B10000000,B11100000,B00000000,B00000000,B00011000,B00001111,B11100000,B00000110,B01101100,B00011001,B10110110,B01100110,B01100000,B00000001,
  B10000000,B01111111,B00000000,B11100000,B00000000,B00000000,B00011100,B00001111,B11000000,B00000110,B01101100,B00011000,B00110110,B00000110,B01100000,B00000001,
  B10000000,B00111100,B00000000,B11100000,B00000000,B00000000,B00011100,B00000111,B11000000,B00000110,B01101111,B11011111,B00110110,B00000110,B01100000,B00000001,
  B10000000,B00001110,B00000000,B11100000,B00000000,B00000000,B11111100,B00001111,B00000000,B00000110,B01101111,B11001111,B10110110,B00000110,B01100000,B00000001,
  B10000000,B00001111,B10000011,B11111100,B00000000,B00000011,B11111111,B10111110,B00000000,B00000110,B01101100,B00000001,B10110110,B11110110,B01100000,B00000001,
  B10000000,B00000011,B11100111,B11111110,B00000000,B00000011,B11111111,B11111100,B00000000,B00000110,B01101100,B00011001,B10110110,B01100110,B01100000,B00000001,
  B10000000,B00000001,B11111111,B11111111,B00000000,B00000111,B11111111,B11110000,B00000000,B00000111,B11101111,B11011111,B10110111,B11100110,B01100000,B00000001,
  B10000000,B00000000,B01111111,B11111111,B10000000,B00001111,B11111111,B11000000,B00000000,B00000111,B11001111,B11001111,B00110011,B11000110,B01100000,B00000001,
  B10000000,B00000000,B00011111,B11111111,B10000000,B00001111,B11111111,B11000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00011111,B11111111,B11111111,B11111111,B11111111,B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00001111,B11111111,B11111111,B11111111,B11111111,B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000111,B11111111,B00111111,B10000111,B11111111,B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000111,B11111111,B00000000,B00000011,B11111111,B11000000,B00000000,B00000000,B00011000,B00011110,B01111100,B01111000,B00000000,B00000001,
  B10000000,B00000000,B00001111,B11111100,B00000000,B00000000,B01110001,B11001110,B00000000,B00000000,B00011000,B00111111,B01111110,B11111100,B00000000,B00000001,
  B10000000,B00000111,B10111110,B00111000,B00000000,B00000000,B11100000,B11111111,B00000000,B00000000,B00011000,B00110011,B01100110,B11001100,B00000000,B00000001,
  B10000000,B00011111,B11111000,B00011100,B00000000,B00000000,B11100000,B01111111,B10000000,B00000000,B00011000,B00110011,B01100110,B11001100,B00000000,B00000001,
  B10000000,B00111111,B11110000,B00011100,B00000000,B00000001,B11000000,B01111111,B10000000,B00000000,B00011000,B00110011,B01100110,B11000000,B00000000,B00000001,
  B10000000,B00111111,B11110000,B00011110,B00000111,B11000001,B11000000,B01111111,B10000000,B00000000,B00011000,B00111111,B01111110,B11111000,B00000000,B00000001,
  B10000000,B01111111,B11110000,B00001110,B00011111,B11110011,B10000000,B01111111,B10000000,B00000000,B00011000,B00111111,B01111100,B01111100,B00000000,B00000001,
  B10000000,B01111111,B11110000,B00000111,B00111111,B11111111,B10000000,B00111111,B10000000,B00000000,B00011000,B00110011,B01100110,B00001100,B00000000,B00000001,
  B10000000,B01111111,B11110000,B00000011,B11111111,B11111111,B00000000,B00111111,B10000000,B00000000,B00011000,B00110011,B01100110,B11001100,B00000000,B00000001,
  B10000000,B01111111,B11100000,B00000011,B11111111,B11111110,B00000000,B00001100,B00000000,B00000000,B00011111,B10110011,B01111110,B11111100,B00000000,B00000001,
  B10000000,B00111111,B11000000,B00000001,B11111111,B11111110,B00000000,B00000000,B00000000,B00000000,B00011111,B10110011,B01111100,B01111000,B00000000,B00000001,
  B10000000,B00011111,B10000000,B00000000,B01111111,B11111110,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B01111111,B11111100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B01111111,B11111100,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00111111,B11111000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00001111,B11100000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B10000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000001,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111
};
