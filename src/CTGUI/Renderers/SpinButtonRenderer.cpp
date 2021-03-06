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


#include <CTGUI/Renderers/SpinButtonRenderer.h>
#include <CTGUI/Renderers/RendererStruct.h>
#include <CTGUI/OutlineStruct.h>
#include <CTGUI/ColorConverter.h>
#include <CTGUI/SFML/Graphics/TextureStruct.h>

#include <TGUI/Renderers/SpinButtonRenderer.hpp>

#define DOWNCAST(x) static_cast<tgui::SpinButtonRenderer*>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiRenderer* tguiSpinButtonRenderer_create(void)
{
    return new tguiRenderer(new tgui::SpinButtonRenderer);
}

tguiRenderer* tguiSpinButtonRenderer_copy(const tguiRenderer* renderer)
{
    return new tguiRenderer(new tgui::SpinButtonRenderer(*DOWNCAST(renderer->This)));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinButtonRenderer_setBorders(tguiRenderer* renderer, tguiOutline* borders)
{
    DOWNCAST(renderer->This)->setBorders(borders->This);
}

tguiOutline* tguiSpinButtonRenderer_getBorders(const tguiRenderer* renderer)
{
    return new tguiOutline(DOWNCAST(renderer->This)->getBorders());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinButtonRenderer_setBorderBetweenArrows(tguiRenderer* renderer, float border)
{
    DOWNCAST(renderer->This)->setBorderBetweenArrows(border);
}

float tguiSpinButtonRenderer_getBorderBetweenArrows(const tguiRenderer* renderer)
{
    return DOWNCAST(renderer->This)->getBorderBetweenArrows();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinButtonRenderer_setBackgroundColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBackgroundColor({color.r, color.g, color.b, color.a});
}

sfColor tguiSpinButtonRenderer_getBackgroundColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBackgroundColor());
}

void tguiSpinButtonRenderer_setBackgroundColorHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBackgroundColorHover({color.r, color.g, color.b, color.a});
}

sfColor tguiSpinButtonRenderer_getBackgroundColorHover(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBackgroundColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinButtonRenderer_setArrowColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setArrowColor({color.r, color.g, color.b, color.a});
}

sfColor tguiSpinButtonRenderer_getArrowColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getArrowColor());
}

void tguiSpinButtonRenderer_setArrowColorHover(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setArrowColorHover({color.r, color.g, color.b, color.a});
}

sfColor tguiSpinButtonRenderer_getArrowColorHover(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getArrowColorHover());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinButtonRenderer_setBorderColor(tguiRenderer* renderer, sfColor color)
{
    DOWNCAST(renderer->This)->setBorderColor({color.r, color.g, color.b, color.a});
}

sfColor tguiSpinButtonRenderer_getBorderColor(const tguiRenderer* renderer)
{
    return convertColor(DOWNCAST(renderer->This)->getBorderColor());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiSpinButtonRenderer_setTextureArrowUp(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureArrowUp(*texture->This);
}

void tguiSpinButtonRenderer_setTextureArrowUpHover(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureArrowUpHover(*texture->This);
}

void tguiSpinButtonRenderer_setTextureArrowDown(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureArrowDown(*texture->This);
}

void tguiSpinButtonRenderer_setTextureArrowDownHover(tguiRenderer* renderer, sfTexture* texture)
{
    DOWNCAST(renderer->This)->setTextureArrowDownHover(*texture->This);
}
