#pragma once
//==================================================================
/**
 *  Hypot.h -- A naive implementation of hypot
 *
 *  Copyright (C) 2024 by James A. Chappell
 *
 *  Permission is hereby granted, free of charge, to any person
 *  obtaining a copy of this software and associated documentation
 *  files (the "Software"), to deal in the Software without
 *  restriction, including without limitation the rights to use,
 *  copy, modify, merge, publish, distribute, sublicense, and/or
 *  sell copies of the Software, and to permit persons to whom the
 *  Software is furnished to do so, subject to the following
 *  condition:
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 *  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 *  OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 *  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 *  HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 *  WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 *  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 *  OTHER DEALINGS IN THE SOFTWARE.
 */
//=================================================================
/*
 * Hypot.h:  Version 1.0
 * Created by James A. Chappell <rlrrlrll@gmail.com>
 * 
 * Created 14 January 2024
 *
 * History:
 * 14-jan-2024 created
 */
//==============


#include <cmath>

#include "Sqr.h"

namespace Storage_B
{
  /**
   * Computes the hypotenuse of a right triangle given the lengths of its two perpendicular sides.
   *
   * The method calculates the square root of the sum of the squares of the two input values.
   * It assumes a generic type T that supports the required arithmetic operations.
   *
   * @param x The length of one perpendicular side of the triangle.
   * @param y The length of the other perpendicular side of the triangle.
   * @return The length of the hypotenuse as a value of type T.
   */
  template <class T> inline T Hypot(T x, T y)
  {
    return std::sqrt(Sqr(x) + Sqr(y));
  }

  /**
   * Computes the hypotenuse of a right triangle in three dimensions given the lengths of its three perpendicular sides.
   *
   * This method calculates the square root of the sum of the squares of the three input values.
   * It assumes a generic type T that supports the required arithmetic operations, such as squaring and square root.
   *
   * @param x The length of the first perpendicular side.
   * @param y The length of the second perpendicular side.
   * @param z The length of the third perpendicular side.
   * @return The length of the three-dimensional hypotenuse as a value of type T.
   */
   template <class T> inline T Hypot(T x, T y, T z)
  {
    return std::sqrt(Sqr(x) + Sqr(y) + Sqr(z));
  }
}
