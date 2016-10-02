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


#include <CTGUI/Widgets/TextBox.h>
#include <CTGUI/WidgetStruct.h>

#include <TGUI/Widgets/TextBox.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::TextBox>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiTextBox_create(void)
{
    return new tguiWidget(tgui::TextBox::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextBox_setText(tguiWidget* widget, const sfUint32* text)
{
    DOWNCAST(widget->This)->setText(text);
}

void tguiTextBox_addText(tguiWidget* widget, const sfUint32* text)
{
    DOWNCAST(widget->This)->addText(text);
}

const sfUint32* tguiTextBox_getText(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getText().getData();
}

const sfUint32* tguiTextBox_getSelectedText(const tguiWidget* widget)
{
    static sf::String selectedText;
    selectedText = DOWNCAST(widget->This)->getSelectedText();
    return selectedText.getData();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextBox_setTextSize(tguiWidget* widget, unsigned int size)
{
    DOWNCAST(widget->This)->setTextSize(size);
}

unsigned int tguiTextBox_getTextSize(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getTextSize();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextBox_setMaximumCharacters(tguiWidget* widget, size_t maximumCharacters)
{
    DOWNCAST(widget->This)->setMaximumCharacters(maximumCharacters);
}

size_t tguiTextBox_getMaximumCharacters(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getMaximumCharacters();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextBox_setReadOnly(tguiWidget* widget, sfBool readOnly)
{
    DOWNCAST(widget->This)->setReadOnly(readOnly);
}

sfBool tguiTextBox_isReadOnly(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->isReadOnly();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiTextBox_setVerticalScrollbarPresent(tguiWidget* widget, sfBool present)
{
    DOWNCAST(widget->This)->setVerticalScrollbarPresent(present);
}

sfBool tguiTextBox_isVerticalScrollbarPresent(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->isVerticalScrollbarPresent();
}