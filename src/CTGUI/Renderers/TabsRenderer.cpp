/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2020 Bruno Van de Velde (vdv_b@tgui.eu)
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


#include <CTGUI/Renderers/TabsRenderer.h>
#include <CTGUI/Renderers/RendererStruct.h>
#include <CTGUI/RendererDataStruct.h>
#include <CTGUI/OutlineStruct.h>
#include <CTGUI/ColorConverter.h>
#include <CTGUI/SFML/Graphics/TextureStruct.h>

#include <TGUI/Renderers/TabsRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::TabsRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiTabsRenderer_create(void)
{
    return new tguiRenderer(new tgui::TabsRenderer);
}

tguiRenderer* tguiTabsRenderer_copy(const tguiRenderer* renderer)
{
    return new tguiRenderer(new tgui::TabsRenderer(*DOWNCAST(renderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabsRenderer_setBorders(tguiRenderer* renderer, tguiOutline* borders)
{
    DOWNCAST(renderer->This)->setBorders(borders->This);
}

tguiOutline* tguiTabsRenderer_getBorders(const tguiRenderer* renderer)
{
    return new tguiOutline(DOWNCAST(renderer->This)->getBorders());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabsRenderer_setBackgroundColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBackgroundColor({color.r, color.g, color.b, color.a});
}

sfColor tguiTabsRenderer_getBackgroundColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBackgroundColor());
}

void tguiTabsRenderer_setBackgroundColorHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBackgroundColorHover({color.r, color.g, color.b, color.a});
}

sfColor tguiTabsRenderer_getBackgroundColorHover(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBackgroundColorHover());
}

void tguiTabsRenderer_setSelectedBackgroundColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setSelectedBackgroundColor({color.r, color.g, color.b, color.a});
}

sfColor tguiTabsRenderer_getSelectedBackgroundColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getSelectedBackgroundColor());
}

void tguiTabsRenderer_setSelectedBackgroundColorHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setSelectedBackgroundColorHover({color.r, color.g, color.b, color.a});
}

sfColor tguiTabsRenderer_getSelectedBackgroundColorHover(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getSelectedBackgroundColorHover());
}

void tguiTabsRenderer_setBackgroundColorDisabled(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBackgroundColorDisabled({color.r, color.g, color.b, color.a});
}

sfColor tguiTabsRenderer_getBackgroundColorDisabled(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBackgroundColorDisabled());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabsRenderer_setTextColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTextColor({color.r, color.g, color.b, color.a});
}

sfColor tguiTabsRenderer_getTextColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getTextColor());
}

void tguiTabsRenderer_setTextColorHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTextColorHover({color.r, color.g, color.b, color.a});
}

sfColor tguiTabsRenderer_getTextColorHover(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getTextColorHover());
}

void tguiTabsRenderer_setSelectedTextColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setSelectedTextColor({color.r, color.g, color.b, color.a});
}

sfColor tguiTabsRenderer_getSelectedTextColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getSelectedTextColor());
}

void tguiTabsRenderer_setSelectedTextColorHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setSelectedTextColorHover({color.r, color.g, color.b, color.a});
}

sfColor tguiTabsRenderer_getSelectedTextColorHover(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getSelectedTextColorHover());
}

void tguiTabsRenderer_setTextColorDisabled(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTextColorDisabled({color.r, color.g, color.b, color.a});
}

sfColor tguiTabsRenderer_getTextColorDisabled(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getTextColorDisabled());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabsRenderer_setBorderColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBorderColor({color.r, color.g, color.b, color.a});
}

sfColor tguiTabsRenderer_getBorderColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBorderColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabsRenderer_setTextureTab(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureTab(*texture->This);
}

void tguiTabsRenderer_setTextureTabHover(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureTabHover(*texture->This);
}

void tguiTabsRenderer_setTextureSelectedTab(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureSelectedTab(*texture->This);
}

void tguiTabsRenderer_setTextureSelectedTabHover(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureSelectedTabHover(*texture->This);
}

void tguiTabsRenderer_setTextureDisabledTab(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureDisabledTab(*texture->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTabsRenderer_setDistanceToSide(tguiRenderer* renderer, float distanceToSide)
{
    DOWNCAST(renderer->This)->setDistanceToSide(distanceToSide);
}

float tguiTabsRenderer_getDistanceToSide(const tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getDistanceToSide();
}
