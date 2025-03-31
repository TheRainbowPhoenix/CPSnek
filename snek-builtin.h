#ifdef SNEK_BUILTIN_DATA
#undef SNEK_BUILTIN_DATA
static CONST uint8_t snek_builtin_names[] = {
	'a', 'b', 's', 0,
	'c', 'h', 'r', 0,
	'l', 'e', 'n', 0,
	'm', 'a', 't', 'h', '.', 's', 'q', 'r', 't', 0,
	'o', 'r', 'd', 0,
	'p', 'r', 'i', 'n', 't', 0,
	's', 'y', 's', '.', 's', 't', 'd', 'o', 'u', 't', '.', 'f', 'l', 'u', 's', 'h', 0,
	'F', 'a', 'l', 's', 'e', 0,
	'N', 'o', 'n', 'e', 0,
	'T', 'r', 'u', 'e', 0,
	'_', 0,
	'e', 'n', 'd', 0,
	AND, 'a', 'n', 'd', 0,
	BREAK, 'b', 'r', 'e', 'a', 'k', 0,
	CONTINUE, 'c', 'o', 'n', 't', 'i', 'n', 'u', 'e', 0,
	DEF, 'd', 'e', 'f', 0,
	DEL, 'd', 'e', 'l', 0,
	ELIF, 'e', 'l', 'i', 'f', 0,
	ELSE, 'e', 'l', 's', 'e', 0,
	FOR, 'f', 'o', 'r', 0,
	GLOBAL, 'g', 'l', 'o', 'b', 'a', 'l', 0,
	IF, 'i', 'f', 0,
	IMPORT, 'i', 'm', 'p', 'o', 'r', 't', 0,
	IN, 'i', 'n', 0,
	IS, 'i', 's', 0,
	NOT, 'n', 'o', 't', 0,
	OR, 'o', 'r', 0,
	PASS, 'p', 'a', 's', 's', 0,
	RANGE, 'r', 'a', 'n', 'g', 'e', 0,
	RETURN, 'r', 'e', 't', 'u', 'r', 'n', 0,
	WHILE, 'w', 'h', 'i', 'l', 'e', 0,
};
#define SNEK_BUILTIN_NAMES_SIZE 185

CONST snek_builtin_t snek_builtins[] = {
	[SNEK_BUILTIN_abs - 1] = {
		.nformal=1,
		.func1 = snek_builtin_abs,
	},
	[SNEK_BUILTIN_chr - 1] = {
		.nformal=1,
		.func1 = snek_builtin_chr,
	},
	[SNEK_BUILTIN_len - 1] = {
		.nformal=1,
		.func1 = snek_builtin_len,
	},
	[SNEK_BUILTIN_math_sqrt - 1] = {
		.nformal=1,
		.func1 = snek_builtin_math_sqrt,
	},
	[SNEK_BUILTIN_ord - 1] = {
		.nformal=1,
		.func1 = snek_builtin_ord,
	},
	[SNEK_BUILTIN_print - 1] = {
		.nformal=-1,
		.funcv = snek_builtin_print,
	},
	[SNEK_BUILTIN_sys_stdout_flush - 1] = {
		.nformal=0,
		.func0 = snek_builtin_sys_stdout_flush,
	},
	[SNEK_BUILTIN_False - 1] = {
		.value = (snek_poly_t)(float)0,
	},
	[SNEK_BUILTIN_None - 1] = {
		.value = SNEK_NULL,
	},
	[SNEK_BUILTIN_True - 1] = {
		.value = (snek_poly_t)(float)1,
	},
	[SNEK_BUILTIN__ - 1] = {
		.value = (snek_poly_t)(float)1,
	},
};

#else /* SNEK_BUILTIN_DATA */
#ifdef SNEK_BUILTIN_DECLS
#undef SNEK_BUILTIN_DECLS
extern snek_poly_t
snek_builtin_abs(snek_poly_t a0);

extern snek_poly_t
snek_builtin_chr(snek_poly_t a0);

extern snek_poly_t
snek_builtin_len(snek_poly_t a0);

extern snek_poly_t
snek_builtin_math_sqrt(snek_poly_t a0);

extern snek_poly_t
snek_builtin_ord(snek_poly_t a0);

extern snek_poly_t
snek_builtin_print(uint8_t nposition, uint8_t nnamed, snek_poly_t *args);

extern snek_poly_t
snek_builtin_sys_stdout_flush(void);

#else /* SNEK_BUILTIN_DECLS */
#define SNEK_BUILTIN_NAMES_MAX_LEN 16
#define SNEK_BUILTIN_NAMES_MAX_ARGS 1
#define snek_init() {\
	snek_globals = snek_alloc(sizeof (snek_frame_t));\
	snek_globals->prev = SNEK_OFFSET_NONE;\
	snek_globals->code = SNEK_OFFSET_NONE;\
}
#define SNEK_BUILTIN_abs 1
#define SNEK_BUILTIN_chr 2
#define SNEK_BUILTIN_len 3
#define SNEK_BUILTIN_math_sqrt 4
#define SNEK_BUILTIN_ord 5
#define SNEK_BUILTIN_print 6
#define SNEK_BUILTIN_sys_stdout_flush 7
#define SNEK_BUILTIN_MAX_FUNC 8
#define SNEK_BUILTIN_False 8
#define SNEK_BUILTIN_None 9
#define SNEK_BUILTIN_True 10
#define SNEK_BUILTIN__ 11
#define SNEK_BUILTIN_MAX_BUILTIN 12
#define SNEK_BUILTIN_end 12
#define SNEK_BUILTIN_END 13
#endif /* SNEK_BUILTIN_DECLS */
#endif /* SNEK_BUILTIN_DATA */
