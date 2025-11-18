/*
 * Copyright (c) 2018-2021 CTCaer
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef GFX_CHINESE_H
#define GFX_CHINESE_H

#include <utils/types.h>

// Chinese font data for commonly used characters in Lockpick RCM
// Each character is 16x16 pixels (32 bytes)

extern const u8 chinese_font_16x16[];

// Function to check if a character is Chinese
bool is_chinese_char(u16 c);

// Function to get Chinese character font data
const u8* get_chinese_char_data(u16 c);

#endif // GFX_CHINESE_H