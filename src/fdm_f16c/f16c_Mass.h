/****************************************************************************//*
 * Copyright (C) 2019 Marek M. Cel
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom
 * the Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 ******************************************************************************/
#ifndef F16C_MASS_H
#define F16C_MASS_H

////////////////////////////////////////////////////////////////////////////////

#include <fdmMain/fdm_Mass.h>

////////////////////////////////////////////////////////////////////////////////

namespace fdm
{

class F16C_Aircraft; ///< aircraft class forward declaration

/**
 * @brief F-16 mass class.
 */
class F16C_Mass : public Mass
{
public:

    /** Constructor. */
    F16C_Mass( const F16C_Aircraft *aircraft );

    /** Destructor. */
    ~F16C_Mass();

private:

    const F16C_Aircraft *m_aircraft;    ///< aircraft model main object
};

} // end of fdm namespace

////////////////////////////////////////////////////////////////////////////////

#endif // F16C_MASS_H
