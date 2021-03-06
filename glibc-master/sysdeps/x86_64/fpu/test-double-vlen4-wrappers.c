/* Wrapper part of tests for AVX ISA versions of vector math functions.
   Copyright (C) 2014-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#include "test-double-vlen4.h"
#include <immintrin.h>

#define VEC_TYPE __m256d

VECTOR_WRAPPER (WRAPPER_NAME (cos), _ZGVcN4v_cos)
VECTOR_WRAPPER (WRAPPER_NAME (sin), _ZGVcN4v_sin)
VECTOR_WRAPPER_fFF (WRAPPER_NAME (sincos), _ZGVcN4vvv_sincos)
VECTOR_WRAPPER (WRAPPER_NAME (log), _ZGVcN4v_log)
VECTOR_WRAPPER (WRAPPER_NAME (exp), _ZGVcN4v_exp)
VECTOR_WRAPPER_ff (WRAPPER_NAME (pow), _ZGVcN4vv_pow)
