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


#ifndef CTGUI_CONTAINER_H
#define CTGUI_CONTAINER_H

#include <CTGUI/Config.h>
#include <SFML/System/Vector2.h>
#include <stddef.h>

CTGUI_API void tguiContainer_add(tguiWidget* container, tguiWidget* widget, const sfUint32* widgetName);
CTGUI_API tguiWidget* tguiContainer_get(tguiWidget* container, const sfUint32* widgetName);
CTGUI_API tguiWidget** tguiContainer_getWidgets(tguiWidget* container, size_t* count);
CTGUI_API const sfUint32** tguiContainer_getWidgetNames(tguiWidget* container, size_t* count);
CTGUI_API void tguiContainer_remove(tguiWidget* container, tguiWidget* widget);
CTGUI_API void tguiContainer_removeAllWidgets(tguiWidget* container);

CTGUI_API sfVector2f tguiContainer_getChildWidgetsOffset(tguiWidget* container);

CTGUI_API void tguiContainer_loadWidgetsFromFile(tguiWidget* container, const char* filename, const char** error);
CTGUI_API void tguiContainer_saveWidgetsToFile(tguiWidget* container, const char* filename, const char** error);

#endif // CTGUI_CONTAINER_H
