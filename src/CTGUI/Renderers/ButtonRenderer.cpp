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


#include <CTGUI/Renderers/ButtonRenderer.h>
#include <CTGUI/Renderers/RendererStruct.h>
#include <CTGUI/SFML/Graphics/TextureStruct.h>

#include <TGUI/Renderers/ButtonRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::ButtonRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiButtonRenderer_create(void)
{
    return new tguiRenderer(new tgui::ButtonRenderer);
}

tguiRenderer* tguiButtonRenderer_copy(const tguiRenderer* renderer)
{
    return new tguiRenderer(new tgui::ButtonRenderer(*DOWNCAST(renderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiButtonRenderer_setBorders(tguiRenderer* renderer, tguiOutline borders)
{
    DOWNCAST(renderer->This)->setBorders({borders.left, borders.top, borders.right, borders.bottom});
}

tguiOutline tguiButtonRenderer_getBorders(const tguiRenderer* renderer)
{
    tgui::Borders borders = DOWNCAST(renderer->This)->getBorders();
    return {borders.left, borders.top, borders.right, borders.bottom};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiButtonRenderer_setTextColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTextColor({color.r, color.g, color.b, color.a});
}

sfColor tguiButtonRenderer_getTextColor(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getTextColor();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

void tguiButtonRenderer_setTextColorHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTextColorHover({color.r, color.g, color.b, color.a});
}

sfColor tguiButtonRenderer_getTextColorHover(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getTextColorHover();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

void tguiButtonRenderer_setTextColorDown(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTextColorDown({color.r, color.g, color.b, color.a});
}

sfColor tguiButtonRenderer_getTextColorDown(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getTextColorDown();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

void tguiButtonRenderer_setTextColorDisabled(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTextColorDisabled({color.r, color.g, color.b, color.a});
}

sfColor tguiButtonRenderer_getTextColorDisabled(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getTextColorDisabled();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiButtonRenderer_setBackgroundColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBackgroundColor({color.r, color.g, color.b, color.a});
}

sfColor tguiButtonRenderer_getBackgroundColor(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getBackgroundColor();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

void tguiButtonRenderer_setBackgroundColorHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBackgroundColorHover({color.r, color.g, color.b, color.a});
}

sfColor tguiButtonRenderer_getBackgroundColorHover(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getBackgroundColorHover();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

void tguiButtonRenderer_setBackgroundColorDown(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBackgroundColorDown({color.r, color.g, color.b, color.a});
}

sfColor tguiButtonRenderer_getBackgroundColorDown(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getBackgroundColorDown();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

void tguiButtonRenderer_setBackgroundColorDisabled(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBackgroundColorDisabled({color.r, color.g, color.b, color.a});
}

sfColor tguiButtonRenderer_getBackgroundColorDisabled(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getBackgroundColorDisabled();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiButtonRenderer_setBorderColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBorderColor({color.r, color.g, color.b, color.a});
}

sfColor tguiButtonRenderer_getBorderColor(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getBorderColor();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

void tguiButtonRenderer_setBorderColorHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBorderColorHover({color.r, color.g, color.b, color.a});
}

sfColor tguiButtonRenderer_getBorderColorHover(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getBorderColorHover();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

void tguiButtonRenderer_setBorderColorDown(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBorderColorDown({color.r, color.g, color.b, color.a});
}

sfColor tguiButtonRenderer_getBorderColorDown(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getBorderColorDown();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

void tguiButtonRenderer_setBorderColorDisabled(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBorderColorDisabled({color.r, color.g, color.b, color.a});
}

sfColor tguiButtonRenderer_getBorderColorDisabled(const tguiRenderer* renderer)
{
    sf::Color color = DOWNCAST(renderer->This)->getBorderColorDisabled();
    return sfColor_fromRGBA(color.r, color.g, color.b, color.a);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiButtonRenderer_setTexture(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTexture(*texture->This);
}

void tguiButtonRenderer_setTextureHover(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureHover(*texture->This);
}

void tguiButtonRenderer_setTextureDown(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureDown(*texture->This);
}

void tguiButtonRenderer_setTextureDisabled(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureDisabled(*texture->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiButtonRenderer_setTextStyle(tguiRenderer* renderer, sfUint32 style)
{
    DOWNCAST(renderer->This)->setTextStyle(style);
}

sfUint32 tguiButtonRenderer_getTextStyle(tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getTextStyle();
}

void tguiButtonRenderer_setTextStyleHover(tguiRenderer* renderer, sfUint32 style)
{
    DOWNCAST(renderer->This)->setTextStyleHover(style);
}

sfUint32 tguiButtonRenderer_getTextStyleHover(tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getTextStyleHover();
}

void tguiButtonRenderer_setTextStyleDown(tguiRenderer* renderer, sfUint32 style)
{
    DOWNCAST(renderer->This)->setTextStyleDown(style);
}

sfUint32 tguiButtonRenderer_getTextStyleDown(tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getTextStyleDown();
}

void tguiButtonRenderer_setTextStyleDisabled(tguiRenderer* renderer, sfUint32 style)
{
    DOWNCAST(renderer->This)->setTextStyleDisabled(style);
}

sfUint32 tguiButtonRenderer_getTextStyleDisabled(tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getTextStyleDisabled();
}