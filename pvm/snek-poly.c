/*
 * Copyright © 2018 Keith Packard <keithp@keithp.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 */

#include "snek.h"

void *
snek_ref(snek_poly_t poly)
{
	if (snek_is_null(poly))
		return NULL;
	return snek_pool + snek_poly_to_offset(poly);
}

snek_poly_t
snek_poly(const void *addr, snek_type_t type)
{
	if (addr == NULL)
		return SNEK_NULL;
	return snek_offset_to_poly((const uint8_t *) addr - snek_pool, type);
}

snek_poly_t
snek_float_to_poly(float f)
{
	if (isnanf(f))
		return SNEK_NAN;
	return (snek_poly_t) { .f = f };
}

static bool
snek_is_float(snek_poly_t v)
{
	if ((v.u & SNEK_EXPONENT_MASK) != SNEK_EXPONENT_MASK || v.u == SNEK_NINF)
		return true;
	return false;
}

snek_poly_t
snek_bool_to_poly(bool b)
{
	return b ? SNEK_ONE : SNEK_ZERO;
}

snek_type_t
snek_poly_type(snek_poly_t v)
{
	return snek_is_float(v) ? snek_float : (v.u & 3);
}

void
snek_poly_print(FILE *file, snek_poly_t poly, char format)
{
	snek_buf_t buf = {
		.put_c = (int(*) (int, void *)) fputc,
		.put_s = (int(*) (const char *, void *)) fputs,
		.closure = file
	};
	snek_poly_format(&buf, poly, format);
}

int8_t
snek_poly_cmp(snek_poly_t a, snek_poly_t b, bool is)
{
	snek_type_t atype = snek_poly_type(a);
	snek_type_t btype = snek_poly_type(b);

	int8_t tdiff = atype - btype;
	if (tdiff)
		return tdiff;
	switch (atype) {
	case snek_float:
		return (b.f < a.f) - (a.f < b.f);
	case snek_string:
		return strcmp(snek_poly_to_string(a), snek_poly_to_string(b));
	case snek_list:
		if (!is)
			return snek_list_cmp(snek_poly_to_list(a), snek_poly_to_list(b));
		/* fall through */
	default:
		return (b.u < a.u) - (a.u < b.u);
	}
}

bool
snek_poly_true(snek_poly_t a)
{
	switch (snek_poly_type(a)) {
	case snek_float:
		return snek_poly_to_float(a) != 0.0f;
	case snek_list:
		return snek_poly_to_list(a)->size != 0;
	case snek_string:
		return strlen(snek_poly_to_string(a)) != 0;
	default:
		return false;
	}
}

snek_offset_t
snek_poly_len(snek_poly_t a)
{
	snek_offset_t len;
	snek_list_t *al;
	switch (snek_poly_type(a)) {
	case snek_string:
		return strlen(snek_poly_to_string(a));
	case snek_list:
		al = snek_poly_to_list(a);
		len = al->size;
		if (snek_list_type(al) == snek_list_dict)
			len /= 2;
		return len;
	default:
		return 0;
	}
}
