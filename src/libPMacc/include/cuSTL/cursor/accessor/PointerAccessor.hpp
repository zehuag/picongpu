/**
 * Copyright 2013 Heiko Burau, Rene Widera
 *
 * This file is part of libPMacc.
 *
 * libPMacc is free software: you can redistribute it and/or modify
 * it under the terms of of either the GNU General Public License or
 * the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * libPMacc is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License and the GNU Lesser General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License
 * and the GNU Lesser General Public License along with libPMacc.
 * If not, see <http://www.gnu.org/licenses/>.
 */
 
#ifndef CURSOR_POINTERACCESSOR_HPP
#define CURSOR_POINTERACCESSOR_HPP

namespace PMacc
{
namespace cursor
{
    
template<typename Type>
struct PointerAccessor
{
    typedef Type& type;
    
    /** Returns the dereferenced pointer of type 'Type'
     *
     * Here a reference is returned because one expects a reference
     * if an ordinary c++ pointer is dereferenced too.
     * There is no danger if the cursor object is temporary.
     */
    template<typename Data>
    HDINLINE
    type operator()(Data& data) const
    {
        return *((Type*)data);
    }
};
    
} // cursor
} // PMacc

#endif // CURSOR_POINTERACCESSOR_HPP
