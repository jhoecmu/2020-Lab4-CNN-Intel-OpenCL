#ifndef KERNEL643_H
#define KERNEL643_H

/****************************************************************
 * Copyright (c) 2020~2020, 18-643 Course Staff, CMU
 * All rights reserved.

 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:

 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.

 * 2. Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.

 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.

 * The views and conclusions contained in the software and
 * documentation are those of the authors and should not be
 * interpreted as representing official policies, either expressed or
 * implied, of the FreeBSD Project.
 ****************************************************************/

/*
 * CMU 18643 Fall 2020 Lab Exercise
 *
 * The parameters in this file sets the CNN kernel on FPGA
 *
 */
#include "instance643.h"

typedef unsigned short index_t;

#define FIX_R (0) // output row
#define FIX_C (0) // output column
#define FIX_M (0) // output dept
#define FIX_N (0) // input depth
#define FIX_K (1) // weights
#define FIX_S (1) // stride

#define FIX_TR (1) // output row
#define FIX_TC (1) // output column
#define FIX_TM (1) // output depth
#define FIX_TN (1) // input depth

#if 1
// blocked
#define TR (13) // output row
#define TC (13) // output column
#define TM (64) // output depth
#define TN (64) // input depth
#else
// flat
#define TR R_OFM // output row
#define TC C_OFM // output column
#define TM M_OFM // output depth
#define TN N_IFM  // input depth
#endif

/*
 * Access macros
 */
#define ARRAYi ARRAY4132
#define ARRAYo ARRAY4132
#define ARRAYw ARRAY2143

#define ARRAY4321(ptr,i4,i3,i2,i1,d4,d3,d2,d1) ((ptr)[(i4)*(d3)*(d2)*(d1)+(i3)*(d2)*(d1)+(i2)*(d1)+(i1)])
#define ARRAY4132(ptr,i4,i1,i3,i2,d4,d1,d3,d2) ((ptr)[(i4)*(d3)*(d2)*(d1)+(i3)*(d2)*(d1)+(i2)*(d1)+(i1)])
#define ARRAY2143(ptr,i2,i1,i4,i3,d2,d1,d4,d3) ((ptr)[(i4)*(d3)*(d2)*(d1)+(i3)*(d2)*(d1)+(i2)*(d1)+(i1)])

#endif
