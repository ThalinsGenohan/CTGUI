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


#include <CTGUI/Renderers/ProgressBarRenderer.h>
#include <CTGUI/Renderers/RendererStruct.h>
#include <CTGUI/OutlineStruct.h>
#include <CTGUI/ColorConverter.h>
#include <CTGUI/SFML/Graphics/TextureStruct.h>

#include <TGUI/Renderers/ProgressBarRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::ProgressBarRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiProgressBarRenderer_create(void)
{
    return new tguiRenderer(new tgui::ProgressBarRenderer);
}

tguiRenderer* tguiProgressBarRenderer_copy(const tguiRenderer* renderer)
{
    return new tguiRenderer(new tgui::ProgressBarRenderer(*DOWNCAST(renderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiProgressBarRenderer_setBorders(tguiRenderer* renderer, tguiOutline* borders)
{
    DOWNCAST(renderer->This)->setBorders(borders->This);
}

tguiOutline* tguiProgressBarRenderer_getBorders(const tguiRenderer* renderer)
{
    return new tguiOutline(DOWNCAST(renderer->This)->getBorders());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiProgressBarRenderer_setTextColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTextColor({color.r, color.g, color.b, color.a});
}

sfColor tguiProgressBarRenderer_getTextColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getTextColor());
}

void tguiProgressBarRenderer_setTextColorFilled(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setTextColorFilled({color.r, color.g, color.b, color.a});
}

sfColor tguiProgressBarRenderer_getTextColorFilled(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getTextColorFilled());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiProgressBarRenderer_setBackgroundColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBackgroundColor({color.r, color.g, color.b, color.a});
}

sfColor tguiProgressBarRenderer_getBackgroundColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBackgroundColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiProgressBarRenderer_setFillColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setFillColor({color.r, color.g, color.b, color.a});
}

sfColor tguiProgressBarRenderer_getFillColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getFillColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiProgressBarRenderer_setBorderColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBorderColor({color.r, color.g, color.b, color.a});
}

sfColor tguiProgressBarRenderer_getBorderColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBorderColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiProgressBarRenderer_setTextureBackground(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureBackground(*texture->This);
}

void tguiProgressBarRenderer_setTextureFill(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureFill(*texture->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiProgressBarRenderer_setTextStyle(tguiRenderer* renderer, sfUint32 style)
{
    DOWNCAST(renderer->This)->setTextStyle(style);
}

sfUint32 tguiProgressBarRenderer_getTextStyle(tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getTextStyle();
}
