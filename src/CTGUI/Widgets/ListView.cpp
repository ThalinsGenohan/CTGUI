/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2018 Bruno Van de Velde (vdv_b@tgui.eu)
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


#include <CTGUI/Widgets/ListView.h>
#include <CTGUI/WidgetStruct.h>
#include <CTGUI/SFML/Graphics/TextureStruct.h>

#include <TGUI/Widgets/ListView.hpp>

#define DOWNCAST(x) std::static_pointer_cast<tgui::ListView>(x)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

tguiWidget* tguiListView_create(void)
{
    return new tguiWidget(tgui::ListView::create());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

size_t tguiListView_addColumn(tguiWidget* widget, const sfUint32* text, float width, tguiHorizontalAlignment columnAlignment)
{
    return DOWNCAST(widget->This)->addColumn(text, width, static_cast<tgui::ListView::ColumnAlignment>(columnAlignment));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setColumnText(tguiWidget* widget, size_t index, const sfUint32* text)
{
    DOWNCAST(widget->This)->setColumnText(index, text);
}

const sfUint32* tguiListView_getColumnText(tguiWidget* widget, size_t index)
{
    return DOWNCAST(widget->This)->getColumnText(index).getData();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setColumnWidth(tguiWidget* widget, size_t index, float width)
{
    DOWNCAST(widget->This)->setColumnWidth(index, width);
}

float tguiListView_getColumnWidth(tguiWidget* widget, size_t index)
{
    return DOWNCAST(widget->This)->getColumnWidth(index);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setColumnAlignment(tguiWidget* widget, size_t index, tguiHorizontalAlignment columnAlignment)
{
    DOWNCAST(widget->This)->setColumnAlignment(index, static_cast<tgui::ListView::ColumnAlignment>(columnAlignment));
}

tguiHorizontalAlignment tguiListView_getColumnAlignment(tguiWidget* widget, size_t index)
{
    return static_cast<tguiHorizontalAlignment>(DOWNCAST(widget->This)->getColumnAlignment(index));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_removeAllColumns(tguiWidget* widget)
{
    DOWNCAST(widget->This)->removeAllColumns();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

size_t tguiListView_getColumnCount(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getColumnCount();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setHeaderHeight(tguiWidget* widget, float height)
{
    DOWNCAST(widget->This)->setHeaderHeight(height);
}

float tguiListView_getHeaderHeight(tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getHeaderHeight();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setHeaderVisible(tguiWidget* widget, sfBool showHeader)
{
    DOWNCAST(widget->This)->setHeaderVisible(showHeader != 0);
}

sfBool tguiListView_getHeaderVisible(tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getHeaderVisible();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

size_t tguiListView_addItem(tguiWidget* widget, const sfUint32* text)
{
    return DOWNCAST(widget->This)->addItem(text);
}

size_t tguiListView_addItemRow(const tguiWidget* widget, const sfUint32** item, unsigned int itemLength)
{
    std::vector<sf::String> convertedItem;
    convertedItem.reserve(itemLength);
    for (unsigned int i = 0; i < itemLength; ++i)
        convertedItem.push_back(item[i]);

    return DOWNCAST(widget->This)->addItem(std::move(convertedItem));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

sfBool tguiListView_removeItem(tguiWidget* widget, size_t index)
{
    return DOWNCAST(widget->This)->removeItem(index);
}

void tguiListView_removeAllItems(tguiWidget* widget)
{
    DOWNCAST(widget->This)->removeAllItems();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setSelectedItem(tguiWidget* widget, size_t index)
{
    DOWNCAST(widget->This)->setSelectedItem(index);
}

int tguiListView_getSelectedItemIndex(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getSelectedItemIndex();
}

void tguiListView_deselectItem(tguiWidget* widget)
{
    DOWNCAST(widget->This)->deselectItem();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setItemIcon(tguiWidget* widget, size_t index, sfTexture* texture)
{
    DOWNCAST(widget->This)->setItemIcon(index, *texture->This);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

size_t tguiListView_getItemCount(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getItemCount();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

const sfUint32* tguiListView_getItem(tguiWidget* widget, size_t index)
{
    return DOWNCAST(widget->This)->getItem(index).getData();
}

const sfUint32** tguiListView_getItemRow(const tguiWidget* widget, size_t index, size_t* count)
{
    const auto& items = DOWNCAST(widget->This)->getItemRow(index);

    static std::vector<const sfUint32*> cItems;
    cItems.resize(items.size());

    for (std::size_t i = 0; i < items.size(); ++i)
        cItems[i] = items[i].getData();

    *count = cItems.size();
    return cItems.data();
}

const sfUint32** tguiListView_getItems(const tguiWidget* widget, size_t* count)
{
    const auto& items = DOWNCAST(widget->This)->getItems();

    static std::vector<const sfUint32*> cItems;
    cItems.resize(items.size());

    for (std::size_t i = 0; i < items.size(); ++i)
        cItems[i] = items[i].getData();

    *count = cItems.size();
    return cItems.data();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setItemHeight(tguiWidget* widget, unsigned int height)
{
    DOWNCAST(widget->This)->setItemHeight(height);
}

unsigned int tguiListView_getItemHeight(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getItemHeight();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setTextSize(tguiWidget* widget, unsigned int size)
{
    DOWNCAST(widget->This)->setTextSize(size);
}

unsigned int tguiListView_getTextSize(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getTextSize();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setHeaderTextSize(tguiWidget* widget, unsigned int size)
{
    DOWNCAST(widget->This)->setHeaderTextSize(size);
}

unsigned int tguiListView_getHeaderTextSize(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getHeaderTextSize();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setSeparatorWidth(tguiWidget* widget, unsigned int width)
{
    DOWNCAST(widget->This)->setSeparatorWidth(width);
}

unsigned int tguiListView_getSeparatorWidth(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getSeparatorWidth();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setAutoScroll(tguiWidget* widget, sfBool autoScroll)
{
    DOWNCAST(widget->This)->setAutoScroll(autoScroll != 0);
}

sfBool tguiListView_getAutoScroll(const tguiWidget* widget)
{
    return DOWNCAST(widget->This)->getAutoScroll();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setVerticalScrollbarPolicy(tguiWidget* widget, tguiScrollbarPolicy policy)
{
    DOWNCAST(widget->This)->setVerticalScrollbarPolicy(static_cast<tgui::Scrollbar::Policy>(policy));
}

tguiScrollbarPolicy tguiListView_getVerticalScrollbarPolicy(const tguiWidget* widget)
{
    return static_cast<tguiScrollbarPolicy>(DOWNCAST(widget->This)->getVerticalScrollbarPolicy());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void tguiListView_setHorizontalScrollbarPolicy(tguiWidget* widget, tguiScrollbarPolicy policy)
{
    DOWNCAST(widget->This)->setHorizontalScrollbarPolicy(static_cast<tgui::Scrollbar::Policy>(policy));
}

tguiScrollbarPolicy tguiListView_getHorizontalScrollbarPolicy(const tguiWidget* widget)
{
    return static_cast<tguiScrollbarPolicy>(DOWNCAST(widget->This)->getHorizontalScrollbarPolicy());
}
