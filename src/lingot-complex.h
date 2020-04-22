/*
 * lingot, a musical instrument tuner.
 *
 * Copyright (C) 2004-2020  Iban Cereijo.
 * Copyright (C) 2004-2008  Jairo Chapela.

 *
 * This file is part of lingot.
 *
 * lingot is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * lingot is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with lingot; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef LINGOT_COMPLEX_H
#define LINGOT_COMPLEX_H

#include <math.h>
#include "lingot-defs.h"

// single ... complex arithmetic  :)

typedef LINGOT_FLT lingot_complex_t[2];

/**
 * Addition. All parameters can overlap.
 */
void lingot_complex_add(const lingot_complex_t a, const lingot_complex_t b, lingot_complex_t c);

/**
 * Subtraction. All parameters can overlap.
 */
void lingot_complex_sub(const lingot_complex_t a, const lingot_complex_t b, lingot_complex_t c);

/**
 * Multiplication. Parameters cannot overlap.
 */
void lingot_complex_mul(const lingot_complex_t a, const lingot_complex_t b, lingot_complex_t c);

/**
 * Division. Parameters cannot overlap.
 */
void lingot_complex_div(const lingot_complex_t a, const lingot_complex_t b, lingot_complex_t c);

/**
 * Computes a *= b
 */
void lingot_complex_mul_by(lingot_complex_t a, const lingot_complex_t b);

/**
 * Computes a /= b
 */
void lingot_complex_div_by(lingot_complex_t a, const lingot_complex_t b);

#endif
