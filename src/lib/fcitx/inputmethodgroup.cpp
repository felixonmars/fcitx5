/*
 * Copyright (C) 2016~2016 by CSSlayer
 * wengxt@gmail.com
 *
 * This library is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; see the file COPYING. If not,
 * see <http://www.gnu.org/licenses/>.
 */

#include "inputmethodgroup.h"

namespace fcitx
{

class InputMethodGroupPrivate
{
public:
    std::vector<std::string> inputMethodList;
};

InputMethodGroup::InputMethodGroup() : d_ptr(std::make_unique<InputMethodGroupPrivate>())
{
}

InputMethodGroup::~InputMethodGroup()
{
}

std::vector<std::string> &InputMethodGroup::inputMethodList()
{
    FCITX_D();
    return d->inputMethodList;
}

const std::vector<std::string> & InputMethodGroup::inputMethodList() const
{
    FCITX_D();
    return d->inputMethodList;
}




}