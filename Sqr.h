#pragma once
//==================================================================
/**
 *  Sqr.h -- C++ function to sqaure number
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
 * Sqr.h:  Version 1.0
 * Created by James A. Chappell <rlrrlrll@gmail.com>
 * 
 * Created 14 January 2024
 *
 * History:
 * 01-jan-2024 created
 */
//==============


namespace Storage_B
{
  template <class T> inline T Sqr(T x)
  {
    return x * x;
  }
}
