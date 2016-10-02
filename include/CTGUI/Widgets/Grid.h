/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2016 Bruno Van de Velde (vdv_b@tgui.eu)
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it freely,
// subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#ifndef CTGUI_GRID_H
#define CTGUI_GRID_H

#include <CTGUI/Config.h>
#include <CTGUI/Widget.h>
#include <CTGUI/Outline.h>
#include <CTGUI/Alignment.h>
#include <stddef.h>

CTGUI_API tguiWidget* tguiGrid_create(void);

CTGUI_API void tguiGrid_addWidget(tguiWidget* grid, tguiWidget* widget, size_t row, size_t col, tguiOutline borders, tguiAlignment alignment);
CTGUI_API tguiWidget* tguiGrid_getWidget(tguiWidget* grid, size_t row, size_t col);

CTGUI_API void tguiGrid_setWidgetBorders(tguiWidget* grid, tguiWidget* widget, tguiOutline borders);
CTGUI_API void tguiGrid_setWidgetBordersByCell(tguiWidget* grid, size_t row, size_t col, tguiOutline borders);
CTGUI_API tguiOutline tguiGrid_getWidgetBorders(tguiWidget* grid, tguiWidget* widget);
CTGUI_API tguiOutline tguiGrid_getWidgetBordersByCell(tguiWidget* grid, size_t row, size_t col);

CTGUI_API void tguiGrid_setWidgetAlignment(tguiWidget* grid, tguiWidget* widget, tguiAlignment alignment);
CTGUI_API void tguiGrid_setWidgetAlignmentByCell(tguiWidget* grid, size_t row, size_t col, tguiAlignment alignment);
CTGUI_API tguiAlignment tguiGrid_getWidgetAlignment(tguiWidget* grid, tguiWidget* widget);
CTGUI_API tguiAlignment tguiGrid_getWidgetAlignmentByCell(tguiWidget* grid, size_t row, size_t col);

#endif // CTGUI_GRID_H
