#ifdef SNEK_BUILTIN_DATA
#undef SNEK_BUILTIN_DATA
#ifndef SNEK_BUILTIN_NAMES_DECLARE
#define SNEK_BUILTIN_NAMES_DECLARE(n) n
#endif
static const uint8_t SNEK_BUILTIN_NAMES_DECLARE(snek_builtin_names)[] = {
	AND | 0x80, 'a', 'n', 'd', 0,
	BREAK | 0x80, 'b', 'r', 'e', 'a', 'k', 0,
	1, 'c', 'h', 'r', 0,
	CONTINUE | 0x80, 'c', 'o', 'n', 't', 'i', 'n', 'u', 'e', 0,
	2, 'c', 'u', 'r', 's', 'e', 's', '.', 'c', 'b', 'r', 'e', 'a', 'k', 0,
	3, 'c', 'u', 'r', 's', 'e', 's', '.', 'e', 'c', 'h', 'o', 0,
	4, 'c', 'u', 'r', 's', 'e', 's', '.', 'e', 'n', 'd', 'w', 'i', 'n', 0,
	5, 'c', 'u', 'r', 's', 'e', 's', '.', 'i', 'n', 'i', 't', 's', 'c', 'r', 0,
	6, 'c', 'u', 'r', 's', 'e', 's', '.', 'n', 'o', 'c', 'b', 'r', 'e', 'a', 'k', 0,
	7, 'c', 'u', 'r', 's', 'e', 's', '.', 'n', 'o', 'e', 'c', 'h', 'o', 0,
	DEF | 0x80, 'd', 'e', 'f', 0,
	DEL | 0x80, 'd', 'e', 'l', 0,
	ELIF | 0x80, 'e', 'l', 'i', 'f', 0,
	ELSE | 0x80, 'e', 'l', 's', 'e', 0,
	8, 'e', 'x', 'i', 't', 0,
	FOR | 0x80, 'f', 'o', 'r', 0,
	GLOBAL | 0x80, 'g', 'l', 'o', 'b', 'a', 'l', 0,
	IF | 0x80, 'i', 'f', 0,
	IMPORT | 0x80, 'i', 'm', 'p', 'o', 'r', 't', 0,
	IN | 0x80, 'i', 'n', 0,
	IS | 0x80, 'i', 's', 0,
	9, 'l', 'e', 'n', 0,
	10, 'm', 'a', 't', 'h', '.', 'a', 'c', 'o', 's', 0,
	11, 'm', 'a', 't', 'h', '.', 'a', 'c', 'o', 's', 'h', 0,
	12, 'm', 'a', 't', 'h', '.', 'a', 's', 'i', 'n', 0,
	13, 'm', 'a', 't', 'h', '.', 'a', 's', 'i', 'n', 'h', 0,
	14, 'm', 'a', 't', 'h', '.', 'a', 't', 'a', 'n', 0,
	15, 'm', 'a', 't', 'h', '.', 'a', 't', 'a', 'n', '2', 0,
	16, 'm', 'a', 't', 'h', '.', 'a', 't', 'a', 'n', 'h', 0,
	17, 'm', 'a', 't', 'h', '.', 'c', 'e', 'i', 'l', 0,
	18, 'm', 'a', 't', 'h', '.', 'c', 'o', 'p', 'y', 's', 'i', 'g', 'n', 0,
	19, 'm', 'a', 't', 'h', '.', 'c', 'o', 's', 0,
	20, 'm', 'a', 't', 'h', '.', 'c', 'o', 's', 'h', 0,
	21, 'm', 'a', 't', 'h', '.', 'd', 'e', 'g', 'r', 'e', 'e', 's', 0,
	22, 'm', 'a', 't', 'h', '.', 'e', 'r', 'f', 0,
	23, 'm', 'a', 't', 'h', '.', 'e', 'r', 'f', 'c', 0,
	24, 'm', 'a', 't', 'h', '.', 'e', 'x', 'p', 0,
	25, 'm', 'a', 't', 'h', '.', 'e', 'x', 'p', '2', 0,
	26, 'm', 'a', 't', 'h', '.', 'e', 'x', 'p', 'm', '1', 0,
	27, 'm', 'a', 't', 'h', '.', 'f', 'a', 'b', 's', 0,
	28, 'm', 'a', 't', 'h', '.', 'f', 'a', 'c', 't', 'o', 'r', 'i', 'a', 'l', 0,
	29, 'm', 'a', 't', 'h', '.', 'f', 'l', 'o', 'o', 'r', 0,
	30, 'm', 'a', 't', 'h', '.', 'f', 'm', 'o', 'd', 0,
	31, 'm', 'a', 't', 'h', '.', 'f', 'r', 'e', 'x', 'p', 0,
	32, 'm', 'a', 't', 'h', '.', 'f', 's', 'u', 'm', 0,
	33, 'm', 'a', 't', 'h', '.', 'g', 'a', 'm', 'm', 'a', 0,
	34, 'm', 'a', 't', 'h', '.', 'g', 'c', 'd', 0,
	35, 'm', 'a', 't', 'h', '.', 'h', 'y', 'p', 'o', 't', 0,
	36, 'm', 'a', 't', 'h', '.', 'i', 's', 'c', 'l', 'o', 's', 'e', 0,
	37, 'm', 'a', 't', 'h', '.', 'i', 's', 'f', 'i', 'n', 'i', 't', 'e', 0,
	38, 'm', 'a', 't', 'h', '.', 'i', 's', 'i', 'n', 'f', 0,
	39, 'm', 'a', 't', 'h', '.', 'i', 's', 'n', 'a', 'n', 0,
	40, 'm', 'a', 't', 'h', '.', 'l', 'd', 'e', 'x', 'p', 0,
	41, 'm', 'a', 't', 'h', '.', 'l', 'g', 'a', 'm', 'm', 'a', 0,
	42, 'm', 'a', 't', 'h', '.', 'l', 'o', 'g', 0,
	43, 'm', 'a', 't', 'h', '.', 'l', 'o', 'g', '1', '0', 0,
	44, 'm', 'a', 't', 'h', '.', 'l', 'o', 'g', '1', 'p', 0,
	45, 'm', 'a', 't', 'h', '.', 'l', 'o', 'g', '2', 0,
	46, 'm', 'a', 't', 'h', '.', 'm', 'o', 'd', 'f', 0,
	47, 'm', 'a', 't', 'h', '.', 'p', 'o', 'w', 0,
	48, 'm', 'a', 't', 'h', '.', 'r', 'a', 'd', 'i', 'a', 'n', 's', 0,
	49, 'm', 'a', 't', 'h', '.', 'r', 'e', 'm', 'a', 'i', 'n', 'd', 'e', 'r', 0,
	50, 'm', 'a', 't', 'h', '.', 's', 'i', 'n', 0,
	51, 'm', 'a', 't', 'h', '.', 's', 'i', 'n', 'h', 0,
	52, 'm', 'a', 't', 'h', '.', 's', 'q', 'r', 't', 0,
	53, 'm', 'a', 't', 'h', '.', 't', 'a', 'n', 0,
	54, 'm', 'a', 't', 'h', '.', 't', 'a', 'n', 'h', 0,
	55, 'm', 'a', 't', 'h', '.', 't', 'r', 'u', 'n', 'c', 0,
	NOT | 0x80, 'n', 'o', 't', 0,
	OR | 0x80, 'o', 'r', 0,
	56, 'o', 'r', 'd', 0,
	PASS | 0x80, 'p', 'a', 's', 's', 0,
	57, 'p', 'r', 'i', 'n', 't', 0,
	58, 'r', 'a', 'n', 'd', 'o', 'm', '.', 'r', 'a', 'n', 'd', 'r', 'a', 'n', 'g', 'e', 0,
	59, 'r', 'a', 'n', 'd', 'o', 'm', '.', 's', 'e', 'e', 'd', 0,
	RANGE | 0x80, 'r', 'a', 'n', 'g', 'e', 0,
	RETURN | 0x80, 'r', 'e', 't', 'u', 'r', 'n', 0,
	60, 'r', 'o', 'u', 'n', 'd', 0,
	61, 's', 't', 'd', 's', 'c', 'r', '.', 'a', 'd', 'd', 's', 't', 'r', 0,
	62, 's', 't', 'd', 's', 'c', 'r', '.', 'e', 'r', 'a', 's', 'e', 0,
	63, 's', 't', 'd', 's', 'c', 'r', '.', 'g', 'e', 't', 'c', 'h', 0,
	64, 's', 't', 'd', 's', 'c', 'r', '.', 'm', 'o', 'v', 'e', 0,
	65, 's', 't', 'd', 's', 'c', 'r', '.', 'n', 'o', 'd', 'e', 'l', 'a', 'y', 0,
	66, 's', 't', 'd', 's', 'c', 'r', '.', 'r', 'e', 'f', 'r', 'e', 's', 'h', 0,
	67, 's', 'y', 's', '.', 's', 't', 'd', 'o', 'u', 't', '.', 'f', 'l', 'u', 's', 'h', 0,
	68, 't', 'i', 'm', 'e', '.', 'm', 'o', 'n', 'o', 't', 'o', 'n', 'i', 'c', 0,
	69, 't', 'i', 'm', 'e', '.', 's', 'l', 'e', 'e', 'p', 0,
	WHILE | 0x80, 'w', 'h', 'i', 'l', 'e', 0,
	70, 'F', 'a', 'l', 's', 'e', 0,
	71, 'T', 'r', 'u', 'e', 0,
	72, 'a', 'b', 's', '_', 't', 'o', 'l', 0,
	73, 'e', 'n', 'd', 0,
	74, 'm', 'a', 't', 'h', '.', 'e', 0,
	75, 'm', 'a', 't', 'h', '.', 'i', 'n', 'f', 0,
	76, 'm', 'a', 't', 'h', '.', 'n', 'a', 'n', 0,
	77, 'm', 'a', 't', 'h', '.', 'p', 'i', 0,
	78, 'm', 'a', 't', 'h', '.', 't', 'a', 'u', 0,
	79, 'r', 'e', 'l', '_', 't', 'o', 'l', 0,
};
#define SNEK_BUILTIN_NAMES_SIZE 1030

#ifndef SNEK_BUILTIN_DECLARE
#define SNEK_BUILTIN_DECLARE(n) n
#endif
const snek_builtin_t SNEK_BUILTIN_DECLARE(snek_builtins)[] = {
	[SNEK_BUILTIN_chr - 1] {
		.nformal=1,
		.func1 = snek_builtin_chr,
	},
	[SNEK_BUILTIN_curses_cbreak - 1] {
		.nformal=0,
		.func0 = snek_builtin_curses_cbreak,
	},
	[SNEK_BUILTIN_curses_echo - 1] {
		.nformal=0,
		.func0 = snek_builtin_curses_echo,
	},
	[SNEK_BUILTIN_curses_endwinner - 1] {
		.nformal=0,
		.func0 = snek_builtin_curses_endwinner,
	},
	[SNEK_BUILTIN_curses_initscr - 1] {
		.nformal=0,
		.func0 = snek_builtin_curses_initscr,
	},
	[SNEK_BUILTIN_curses_nocbreak - 1] {
		.nformal=0,
		.func0 = snek_builtin_curses_nocbreak,
	},
	[SNEK_BUILTIN_curses_noecho - 1] {
		.nformal=0,
		.func0 = snek_builtin_curses_noecho,
	},
	[SNEK_BUILTIN_exit - 1] {
		.nformal=1,
		.func1 = snek_builtin_exit,
	},
	[SNEK_BUILTIN_len - 1] {
		.nformal=1,
		.func1 = snek_builtin_len,
	},
	[SNEK_BUILTIN_math_acos - 1] {
		.nformal=1,
		.func1 = snek_builtin_math_acos,
	},
	[SNEK_BUILTIN_math_acosh - 1] {
		.nformal=1,
		.func1 = snek_builtin_math_acosh,
	},
	[SNEK_BUILTIN_math_asin - 1] {
		.nformal=1,
		.func1 = snek_builtin_math_asin,
	},
	[SNEK_BUILTIN_math_asinh - 1] {
		.nformal=1,
		.func1 = snek_builtin_math_asinh,
	},
	[SNEK_BUILTIN_math_atan - 1] {
		.nformal=1,
		.func1 = snek_builtin_math_atan,
	},
	[SNEK_BUILTIN_math_atan2 - 1] {
		.nformal=2,
		.func2 = snek_builtin_math_atan2,
	},
	[SNEK_BUILTIN_math_atanh - 1] {
		.nformal=1,
		.func1 = snek_builtin_math_atanh,
	},
	[SNEK_BUILTIN_math_ceil - 1] {
		.nformal=1,
		.func1 = snek_builtin_math_ceil,
	},
	[SNEK_BUILTIN_math_copysign - 1] {
		.nformal=2,
		.func2 = snek_builtin_math_copysign,
	},
	[SNEK_BUILTIN_math_cos - 1] {
		.nformal=1,
		.func1 = snek_builtin_math_cos,
	},
	[SNEK_BUILTIN_math_cosh - 1] {
		.nformal=1,
		.func1 = snek_builtin_math_cosh,
	},
	[SNEK_BUILTIN_math_degrees - 1] {
		.nformal=1,
		.func1 = snek_builtin_math_degrees,
	},
	[SNEK_BUILTIN_math_erf - 1] {
		.nformal=1,
		.func1 = snek_builtin_math_erf,
	},
	[SNEK_BUILTIN_math_erfc - 1] {
		.nformal=1,
		.func1 = snek_builtin_math_erfc,
	},
	[SNEK_BUILTIN_math_exp - 1] {
		.nformal=1,
		.func1 = snek_builtin_math_exp,
	},
	[SNEK_BUILTIN_math_exp2 - 1] {
		.nformal=1,
		.func1 = snek_builtin_math_exp2,
	},
	[SNEK_BUILTIN_math_expm1 - 1] {
		.nformal=1,
		.func1 = snek_builtin_math_expm1,
	},
	[SNEK_BUILTIN_math_fabs - 1] {
		.nformal=1,
		.func1 = snek_builtin_math_fabs,
	},
	[SNEK_BUILTIN_math_factorial - 1] {
		.nformal=1,
		.func1 = snek_builtin_math_factorial,
	},
	[SNEK_BUILTIN_math_floor - 1] {
		.nformal=1,
		.func1 = snek_builtin_math_floor,
	},
	[SNEK_BUILTIN_math_fmod - 1] {
		.nformal=2,
		.func2 = snek_builtin_math_fmod,
	},
	[SNEK_BUILTIN_math_frexp - 1] {
		.nformal=1,
		.func1 = snek_builtin_math_frexp,
	},
	[SNEK_BUILTIN_math_fsum - 1] {
		.nformal=1,
		.func1 = snek_builtin_math_fsum,
	},
	[SNEK_BUILTIN_math_gamma - 1] {
		.nformal=1,
		.func1 = snek_builtin_math_gamma,
	},
	[SNEK_BUILTIN_math_gcd - 1] {
		.nformal=2,
		.func2 = snek_builtin_math_gcd,
	},
	[SNEK_BUILTIN_math_hypot - 1] {
		.nformal=2,
		.func2 = snek_builtin_math_hypot,
	},
	[SNEK_BUILTIN_math_isclose - 1] {
		.nformal=-1,
		.funcv = snek_builtin_math_isclose,
	},
	[SNEK_BUILTIN_math_isfinite - 1] {
		.nformal=1,
		.func1 = snek_builtin_math_isfinite,
	},
	[SNEK_BUILTIN_math_isinf - 1] {
		.nformal=1,
		.func1 = snek_builtin_math_isinf,
	},
	[SNEK_BUILTIN_math_isnan - 1] {
		.nformal=1,
		.func1 = snek_builtin_math_isnan,
	},
	[SNEK_BUILTIN_math_ldexp - 1] {
		.nformal=2,
		.func2 = snek_builtin_math_ldexp,
	},
	[SNEK_BUILTIN_math_lgamma - 1] {
		.nformal=1,
		.func1 = snek_builtin_math_lgamma,
	},
	[SNEK_BUILTIN_math_log - 1] {
		.nformal=1,
		.func1 = snek_builtin_math_log,
	},
	[SNEK_BUILTIN_math_log10 - 1] {
		.nformal=1,
		.func1 = snek_builtin_math_log10,
	},
	[SNEK_BUILTIN_math_log1p - 1] {
		.nformal=1,
		.func1 = snek_builtin_math_log1p,
	},
	[SNEK_BUILTIN_math_log2 - 1] {
		.nformal=1,
		.func1 = snek_builtin_math_log2,
	},
	[SNEK_BUILTIN_math_modf - 1] {
		.nformal=1,
		.func1 = snek_builtin_math_modf,
	},
	[SNEK_BUILTIN_math_pow - 1] {
		.nformal=2,
		.func2 = snek_builtin_math_pow,
	},
	[SNEK_BUILTIN_math_radians - 1] {
		.nformal=1,
		.func1 = snek_builtin_math_radians,
	},
	[SNEK_BUILTIN_math_remainder - 1] {
		.nformal=2,
		.func2 = snek_builtin_math_remainder,
	},
	[SNEK_BUILTIN_math_sin - 1] {
		.nformal=1,
		.func1 = snek_builtin_math_sin,
	},
	[SNEK_BUILTIN_math_sinh - 1] {
		.nformal=1,
		.func1 = snek_builtin_math_sinh,
	},
	[SNEK_BUILTIN_math_sqrt - 1] {
		.nformal=1,
		.func1 = snek_builtin_math_sqrt,
	},
	[SNEK_BUILTIN_math_tan - 1] {
		.nformal=1,
		.func1 = snek_builtin_math_tan,
	},
	[SNEK_BUILTIN_math_tanh - 1] {
		.nformal=1,
		.func1 = snek_builtin_math_tanh,
	},
	[SNEK_BUILTIN_math_trunc - 1] {
		.nformal=1,
		.func1 = snek_builtin_math_trunc,
	},
	[SNEK_BUILTIN_ord - 1] {
		.nformal=1,
		.func1 = snek_builtin_ord,
	},
	[SNEK_BUILTIN_print - 1] {
		.nformal=-1,
		.funcv = snek_builtin_print,
	},
	[SNEK_BUILTIN_random_randrange - 1] {
		.nformal=1,
		.func1 = snek_builtin_random_randrange,
	},
	[SNEK_BUILTIN_random_seed - 1] {
		.nformal=1,
		.func1 = snek_builtin_random_seed,
	},
	[SNEK_BUILTIN_round - 1] {
		.nformal=1,
		.func1 = snek_builtin_round,
	},
	[SNEK_BUILTIN_stdscr_addstr - 1] {
		.nformal=3,
		.func3 = snek_builtin_stdscr_addstr,
	},
	[SNEK_BUILTIN_stdscr_erase - 1] {
		.nformal=0,
		.func0 = snek_builtin_stdscr_erase,
	},
	[SNEK_BUILTIN_stdscr_getch - 1] {
		.nformal=0,
		.func0 = snek_builtin_stdscr_getch,
	},
	[SNEK_BUILTIN_stdscr_move - 1] {
		.nformal=2,
		.func2 = snek_builtin_stdscr_move,
	},
	[SNEK_BUILTIN_stdscr_nodelay - 1] {
		.nformal=1,
		.func1 = snek_builtin_stdscr_nodelay,
	},
	[SNEK_BUILTIN_stdscr_refresh - 1] {
		.nformal=0,
		.func0 = snek_builtin_stdscr_refresh,
	},
	[SNEK_BUILTIN_sys_stdout_flush - 1] {
		.nformal=0,
		.func0 = snek_builtin_sys_stdout_flush,
	},
	[SNEK_BUILTIN_time_monotonic - 1] {
		.nformal=0,
		.func0 = snek_builtin_time_monotonic,
	},
	[SNEK_BUILTIN_time_sleep - 1] {
		.nformal=1,
		.func1 = snek_builtin_time_sleep,
	},
};

#else /* SNEK_BUILTIN_DATA */
#ifdef SNEK_BUILTIN_DECLS
#undef SNEK_BUILTIN_DECLS
extern snek_poly_t
snek_builtin_chr(snek_poly_t a0);

extern snek_poly_t
snek_builtin_curses_cbreak(void);

extern snek_poly_t
snek_builtin_curses_echo(void);

extern snek_poly_t
snek_builtin_curses_endwinner(void);

extern snek_poly_t
snek_builtin_curses_initscr(void);

extern snek_poly_t
snek_builtin_curses_nocbreak(void);

extern snek_poly_t
snek_builtin_curses_noecho(void);

extern snek_poly_t
snek_builtin_exit(snek_poly_t a0);

extern snek_poly_t
snek_builtin_len(snek_poly_t a0);

extern snek_poly_t
snek_builtin_math_acos(snek_poly_t a0);

extern snek_poly_t
snek_builtin_math_acosh(snek_poly_t a0);

extern snek_poly_t
snek_builtin_math_asin(snek_poly_t a0);

extern snek_poly_t
snek_builtin_math_asinh(snek_poly_t a0);

extern snek_poly_t
snek_builtin_math_atan(snek_poly_t a0);

extern snek_poly_t
snek_builtin_math_atan2(snek_poly_t a0, snek_poly_t a1);

extern snek_poly_t
snek_builtin_math_atanh(snek_poly_t a0);

extern snek_poly_t
snek_builtin_math_ceil(snek_poly_t a0);

extern snek_poly_t
snek_builtin_math_copysign(snek_poly_t a0, snek_poly_t a1);

extern snek_poly_t
snek_builtin_math_cos(snek_poly_t a0);

extern snek_poly_t
snek_builtin_math_cosh(snek_poly_t a0);

extern snek_poly_t
snek_builtin_math_degrees(snek_poly_t a0);

extern snek_poly_t
snek_builtin_math_erf(snek_poly_t a0);

extern snek_poly_t
snek_builtin_math_erfc(snek_poly_t a0);

extern snek_poly_t
snek_builtin_math_exp(snek_poly_t a0);

extern snek_poly_t
snek_builtin_math_exp2(snek_poly_t a0);

extern snek_poly_t
snek_builtin_math_expm1(snek_poly_t a0);

extern snek_poly_t
snek_builtin_math_fabs(snek_poly_t a0);

extern snek_poly_t
snek_builtin_math_factorial(snek_poly_t a0);

extern snek_poly_t
snek_builtin_math_floor(snek_poly_t a0);

extern snek_poly_t
snek_builtin_math_fmod(snek_poly_t a0, snek_poly_t a1);

extern snek_poly_t
snek_builtin_math_frexp(snek_poly_t a0);

extern snek_poly_t
snek_builtin_math_fsum(snek_poly_t a0);

extern snek_poly_t
snek_builtin_math_gamma(snek_poly_t a0);

extern snek_poly_t
snek_builtin_math_gcd(snek_poly_t a0, snek_poly_t a1);

extern snek_poly_t
snek_builtin_math_hypot(snek_poly_t a0, snek_poly_t a1);

extern snek_poly_t
snek_builtin_math_isclose(uint8_t nposition, uint8_t nnamed, snek_poly_t *args);

extern snek_poly_t
snek_builtin_math_isfinite(snek_poly_t a0);

extern snek_poly_t
snek_builtin_math_isinf(snek_poly_t a0);

extern snek_poly_t
snek_builtin_math_isnan(snek_poly_t a0);

extern snek_poly_t
snek_builtin_math_ldexp(snek_poly_t a0, snek_poly_t a1);

extern snek_poly_t
snek_builtin_math_lgamma(snek_poly_t a0);

extern snek_poly_t
snek_builtin_math_log(snek_poly_t a0);

extern snek_poly_t
snek_builtin_math_log10(snek_poly_t a0);

extern snek_poly_t
snek_builtin_math_log1p(snek_poly_t a0);

extern snek_poly_t
snek_builtin_math_log2(snek_poly_t a0);

extern snek_poly_t
snek_builtin_math_modf(snek_poly_t a0);

extern snek_poly_t
snek_builtin_math_pow(snek_poly_t a0, snek_poly_t a1);

extern snek_poly_t
snek_builtin_math_radians(snek_poly_t a0);

extern snek_poly_t
snek_builtin_math_remainder(snek_poly_t a0, snek_poly_t a1);

extern snek_poly_t
snek_builtin_math_sin(snek_poly_t a0);

extern snek_poly_t
snek_builtin_math_sinh(snek_poly_t a0);

extern snek_poly_t
snek_builtin_math_sqrt(snek_poly_t a0);

extern snek_poly_t
snek_builtin_math_tan(snek_poly_t a0);

extern snek_poly_t
snek_builtin_math_tanh(snek_poly_t a0);

extern snek_poly_t
snek_builtin_math_trunc(snek_poly_t a0);

extern snek_poly_t
snek_builtin_ord(snek_poly_t a0);

extern snek_poly_t
snek_builtin_print(uint8_t nposition, uint8_t nnamed, snek_poly_t *args);

extern snek_poly_t
snek_builtin_random_randrange(snek_poly_t a0);

extern snek_poly_t
snek_builtin_random_seed(snek_poly_t a0);

extern snek_poly_t
snek_builtin_round(snek_poly_t a0);

extern snek_poly_t
snek_builtin_stdscr_addstr(snek_poly_t a0, snek_poly_t a1, snek_poly_t a2);

extern snek_poly_t
snek_builtin_stdscr_erase(void);

extern snek_poly_t
snek_builtin_stdscr_getch(void);

extern snek_poly_t
snek_builtin_stdscr_move(snek_poly_t a0, snek_poly_t a1);

extern snek_poly_t
snek_builtin_stdscr_nodelay(snek_poly_t a0);

extern snek_poly_t
snek_builtin_stdscr_refresh(void);

extern snek_poly_t
snek_builtin_sys_stdout_flush(void);

extern snek_poly_t
snek_builtin_time_monotonic(void);

extern snek_poly_t
snek_builtin_time_sleep(snek_poly_t a0);

#else /* SNEK_BUILTIN_DECLS */
#define SNEK_BUILTIN_NAMES_MAX_LEN 16
#define SNEK_BUILTIN_NAMES_MAX_ARGS 3
#include "snek-cp.h"
#ifndef SNEK_BUILTIN_NFORMAL
#define SNEK_BUILTIN_NFORMAL(b) ((b)->nformal)
#define SNEK_BUILTIN_FUNCV(b) ((b)->funcv)
#define SNEK_BUILTIN_FUNC0(b) ((b)->func0)
#define SNEK_BUILTIN_FUNC1(b) ((b)->func1)
#define SNEK_BUILTIN_FUNC2(b) ((b)->func2)
#define SNEK_BUILTIN_FUNC3(b) ((b)->func3)
#endif
#define SNEK_BUILTIN_chr 1
#define SNEK_BUILTIN_curses_cbreak 2
#define SNEK_BUILTIN_curses_echo 3
#define SNEK_BUILTIN_curses_endwinner 4
#define SNEK_BUILTIN_curses_initscr 5
#define SNEK_BUILTIN_curses_nocbreak 6
#define SNEK_BUILTIN_curses_noecho 7
#define SNEK_BUILTIN_exit 8
#define SNEK_BUILTIN_len 9
#define SNEK_BUILTIN_math_acos 10
#define SNEK_BUILTIN_math_acosh 11
#define SNEK_BUILTIN_math_asin 12
#define SNEK_BUILTIN_math_asinh 13
#define SNEK_BUILTIN_math_atan 14
#define SNEK_BUILTIN_math_atan2 15
#define SNEK_BUILTIN_math_atanh 16
#define SNEK_BUILTIN_math_ceil 17
#define SNEK_BUILTIN_math_copysign 18
#define SNEK_BUILTIN_math_cos 19
#define SNEK_BUILTIN_math_cosh 20
#define SNEK_BUILTIN_math_degrees 21
#define SNEK_BUILTIN_math_erf 22
#define SNEK_BUILTIN_math_erfc 23
#define SNEK_BUILTIN_math_exp 24
#define SNEK_BUILTIN_math_exp2 25
#define SNEK_BUILTIN_math_expm1 26
#define SNEK_BUILTIN_math_fabs 27
#define SNEK_BUILTIN_math_factorial 28
#define SNEK_BUILTIN_math_floor 29
#define SNEK_BUILTIN_math_fmod 30
#define SNEK_BUILTIN_math_frexp 31
#define SNEK_BUILTIN_math_fsum 32
#define SNEK_BUILTIN_math_gamma 33
#define SNEK_BUILTIN_math_gcd 34
#define SNEK_BUILTIN_math_hypot 35
#define SNEK_BUILTIN_math_isclose 36
#define SNEK_BUILTIN_math_isfinite 37
#define SNEK_BUILTIN_math_isinf 38
#define SNEK_BUILTIN_math_isnan 39
#define SNEK_BUILTIN_math_ldexp 40
#define SNEK_BUILTIN_math_lgamma 41
#define SNEK_BUILTIN_math_log 42
#define SNEK_BUILTIN_math_log10 43
#define SNEK_BUILTIN_math_log1p 44
#define SNEK_BUILTIN_math_log2 45
#define SNEK_BUILTIN_math_modf 46
#define SNEK_BUILTIN_math_pow 47
#define SNEK_BUILTIN_math_radians 48
#define SNEK_BUILTIN_math_remainder 49
#define SNEK_BUILTIN_math_sin 50
#define SNEK_BUILTIN_math_sinh 51
#define SNEK_BUILTIN_math_sqrt 52
#define SNEK_BUILTIN_math_tan 53
#define SNEK_BUILTIN_math_tanh 54
#define SNEK_BUILTIN_math_trunc 55
#define SNEK_BUILTIN_ord 56
#define SNEK_BUILTIN_print 57
#define SNEK_BUILTIN_random_randrange 58
#define SNEK_BUILTIN_random_seed 59
#define SNEK_BUILTIN_round 60
#define SNEK_BUILTIN_stdscr_addstr 61
#define SNEK_BUILTIN_stdscr_erase 62
#define SNEK_BUILTIN_stdscr_getch 63
#define SNEK_BUILTIN_stdscr_move 64
#define SNEK_BUILTIN_stdscr_nodelay 65
#define SNEK_BUILTIN_stdscr_refresh 66
#define SNEK_BUILTIN_sys_stdout_flush 67
#define SNEK_BUILTIN_time_monotonic 68
#define SNEK_BUILTIN_time_sleep 69
#define SNEK_BUILTIN_MAX_FUNC 70
#define SNEK_BUILTIN_False 70
#define SNEK_BUILTIN_True 71
#define SNEK_BUILTIN_abs_tol 72
#define SNEK_BUILTIN_end 73
#define SNEK_BUILTIN_math_e 74
#define SNEK_BUILTIN_math_inf 75
#define SNEK_BUILTIN_math_nan 76
#define SNEK_BUILTIN_math_pi 77
#define SNEK_BUILTIN_math_tau 78
#define SNEK_BUILTIN_rel_tol 79
#define SNEK_BUILTIN_END 80
#endif /* SNEK_BUILTIN_DECLS */
#endif /* SNEK_BUILTIN_DATA */
