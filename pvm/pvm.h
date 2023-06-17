// Based from snek.h - which is Copyright © 2018 Keith Packard <keithp@keithp.com>

#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdarg.h>
#include <string.h>
#include <math.h>
#include <assert.h>

#include "snek-builtin.h"

#ifndef SNEK_POOL
#define SNEK_POOL		(32 * 1024)
#endif
#define SNEK_ALLOC_SHIFT	2
#define SNEK_ALLOC_ROUND	(1 << SNEK_ALLOC_SHIFT)

/*
 * Offsets are encoded in floats as NaN values with the sign bit
 * set. That means the top 9 bits of the value are all one. There is
 * one other value with that value, -inf, which is encoded as negative
 * sign, all exponent bits one and a zero mantissa.
 *
 * This leaves us 23 bits for offsets. The bottom two bits of offsets
 * are used as tags; allocations within the heap are rounded to a
 * multiple of four bytes so that offsets will always have the bottom
 * two bits clear.
 */

#define SNEK_OFFSET_MASK	0x007ffffcu
#define SNEK_EXPONENT_MASK	0xff800000u
#define SNEK_NINF		0xff800000u


#if SNEK_POOL <= 65536
typedef uint16_t	snek_offset_t;
typedef int16_t		snek_soffset_t;
#define SNEK_OFFSET_NONE	0xfffcu
#define SNEK_SOFFSET_NONE	0x7ffc
#else
typedef uint32_t	snek_offset_t;
typedef int32_t		snek_soffset_t;
#define SNEK_OFFSET_NONE	0xfffffffcu
#define SNEK_SOFFSET_NONE	0x7ffffffc
#endif
