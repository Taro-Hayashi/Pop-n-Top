/* Copyright 2019 e3w2q
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

#include "quantum.h"

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */

#define LAYOUT( \
    l000, l001, l002, l003, l004, l005, l006, l007, l008, l009, l010,\
    l100, l101, l102, l103, l104, l105, l106, l107, l108, l109, l110,\
    l200, l201, l202, l203, l204, l205, l206, l207, l208, l209, l210,\
    r000, r001, r002, r003, r004, r005, r006, r007, r008, r009, r010,\
    r100, r101, r102, r103, r104, r105, r106, r107, r108, r109, r110,\
    r200, r201, r202, r203, r204, r205, r206, r207, r208, r209, r210 \
  ) \
  { \
    { l000, l001, l002, l003, l004, l005, l006, l007, l008, l009, l010 }, \
    { l100, l101, l102, l103, l104, l105, l106, l107, l108, l109, l110 }, \
    { l200, l201, l202, l203, l204, l205, l206, l207, l208, l209, l210 }, \
    { r000, r001, r002, r003, r004, r005, r006, r007, r008, r009, r010 }, \
    { r100, r101, r102, r103, r104, r105, r106, r107, r108, r109, r110 }, \
    { r200, r201, r202, r203, r204, r205, r206, r207, r208, r209, r210 } \
  }

