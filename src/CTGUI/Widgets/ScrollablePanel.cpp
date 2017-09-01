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


#include <CTGUI/Widgets/ScrollablePanel.h>
#include <CTGUI/WidgetStruct.h>

#include <TGUI/Widgets/ScrollablePanel.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::ScrollablePanel>(x)

tguiWidget* tguiScrollablePanel_create(void)
{
    return new tguiWidget(tgui::ScrollablePanel::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiScrollablePanel_setContentSize(tguiWidget* widget, sfVector2f contentSize)
{
    DOWNCAST(widget->This)->setContentSize({contentSize.x, contentSize.y});
}

sfVector2f tguiScrollablePanel_getContentSize(const tguiWidget* widget)
{
    sf::Vector2f contentSize = DOWNCAST(widget->This)->getContentSize();
    return {contentSize.x, contentSize.y};
}
