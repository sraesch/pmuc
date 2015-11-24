/*
 * Plant Mock-Up Converter
 *
 * Copyright (c) 2013, EDF. All rights reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301  USA
 */

#include "rvmcolorhelper.h"

#include <vector>

using namespace std;

unsigned char navisworks_colors[256][3] = {
    {192, 192, 192}, // unknown
    {0, 0, 0}, // Black
    {80, 0, 0}, //Red
    {93, 60, 0}, // Orange
    {80, 80, 0}, // Yellow
    {0, 80, 0}, // Green
    {0, 93, 93}, // Cyan
    {0, 0, 80}, // Blue
    {87, 0, 87}, // Magenta
    {80, 17, 17}, // Brown
    {100, 100, 100}, // White
    {98, 50, 44}, // Salmon
    {75, 75, 75}, // LightGrey
    {66, 66, 66}, // Grey
    {55, 40, 55}, // Plum
    {96, 96, 96}, // WhiteSmoke
    {56, 14, 42}, // Maroon
    {0, 100, 50}, // SpringGreen
    {96, 87, 70}, // Wheat
    {93, 79, 20}, // Gold
    {28, 46, 100}, // RoyalBlue
    {93, 91, 67}, // LightGold
    {93, 7, 54}, // DeepPink
    {14, 56, 14}, // ForestGreen
    {100, 65, 0}, // BrightOrange
    {93, 93, 88}, // Ivory
    {93, 46, 13}, // Chocolate
    {28, 51, 71}, // SteelBlue
    {100, 100, 100}, // White
    {18, 18, 31}, // Midnight
    {0, 0, 50}, // NavyBlue
    {80, 57, 62}, // Pink
    {80, 36, 27}, // CoralRed
    {0, 0, 0}, // Black
    {80, 0, 0}, // Red
    {93, 60, 0}, // Orange
    {80, 80, 0}, // Yellow
    {0, 80, 0}, // Green
    {0, 93, 93}, // Cyan
    {0, 0, 80}, // Blue
    {87, 0, 87}, // Magenta
    {80, 17, 17}, // Brown
    {100, 100, 100}, // White
    {98, 50, 44}, // Salmon
    {75, 75, 75}, // LightGrey
    {66, 66, 66}, // Grey
    {55, 40, 55}, // Plum
    {96, 96, 96}, // WhiteSmoke
    {56, 14, 42}, // Maroon
    {0, 100, 50}, // SpringGreen
    {96, 87, 70}, // Wheat
    {93, 79, 20}, // Gold
    {28, 46, 100}, // RoyalBlue
    {93, 91, 67}, // LightGold
    {93, 7, 54}, // DeepPink
    {14, 56, 14}, // ForestGreen
    {100, 65, 0}, // BrightOrange
    {93, 93, 88}, // Ivory
    {93, 46, 13}, // Chocolate
    {28, 51, 71}, // SteelBlue
    {100, 100, 100}, // White
    {18, 18, 31}, // Midnight
    {0, 0, 50}, // NavyBlue
    {80, 57, 62}, // Pink
    {80, 36, 27}, // CoralRed
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {192, 192, 192}, // unknown
    {0, 0, 0}, // Black
    {100, 100, 100}, // White
    {96, 96, 96}, // WhiteSmoke
    {93, 93, 88}, // Ivory
    {66, 66, 66}, // Grey
    {75, 75, 75}, // LightGrey
    {32, 55, 55}, // DarkGrey
    {18, 31, 31}, // DarkSlate
    {80, 0, 0}, // Red
    {100, 0, 0}, // BrightRed
    {80, 36, 27}, // CoralRed
    {100, 39, 28}, // Tomato
    {55, 40, 55}, // Plum
    {93, 7, 54}, // DeepPink
    {80, 57, 62}, // Pink
    {98, 50, 44}, // Salmon
    {93, 60, 0}, // Orange
    {100, 65, 0}, // BrightOrange
    {100, 50, 0}, // OrangeRed
    {56, 14, 42}, // Maroon
    {80, 80, 0}, // Yellow
    {93, 79, 20}, // Gold
    {93, 93, 82}, // LightYellow
    {93, 91, 67}, // LightGold
    {60, 80, 20}, // YellowGreen
    {0, 100, 50}, // SpringGreen
    {0, 80, 0}, // Green
    {14, 56, 14}, // ForestGreen
    {18, 31, 18}, // DarkGreen
    {0, 93, 93}, // Cyan
    {0, 75, 80}, // Turquoise
    {46, 93, 78}, // Aquamarine
    {0, 0, 80}, // Blue
    {28, 46, 100}, // RoyalBlue
    {0, 0, 50}, // NavyBlue
    {69, 88, 90}, // PowderBlue
    {18, 18, 31}, // Midnight
    {28, 51, 71}, // SteelBlue
    {20, 0, 40}, // Indigo
    {40, 0, 60}, // Mauve
    {93, 51, 93}, // Violet
    {87, 0, 87}, // Magenta
    {96, 96, 86}, // Beige
    {96, 87, 70}, // Wheat
    {86, 58, 44}, // Tan
    {96, 65, 37}, // SandyBrown
    {80, 17, 17}, // Brown
    {62, 62, 37}, // Khaki
    {93, 46, 13}, // Chocolate
    {55, 27, 8} // DarkBrown
};

RVMColorHelper::RVMColorHelper()
{
}

const vector<float> RVMColorHelper::color(unsigned char index) {
    vector<float> c;
    c.push_back((float)navisworks_colors[index][0] / 100.f);
    c.push_back((float)navisworks_colors[index][1] / 100.f);
    c.push_back((float)navisworks_colors[index][2] / 100.f);
    return c;
}
