
#include "snek.h"

snek_poly_t
snek_builtin_exit(snek_poly_t a)
{
	int ret;
	switch (snek_poly_type(a)) {
	case snek_float:
		ret = (int) snek_poly_to_float(a);
		break;
	default:
		ret = snek_poly_true(a) ? 0 : 1;
		break;
	}
	// exit(ret);
}


snek_poly_t
snek_builtin_time_sleep(snek_poly_t a)
{
	if (snek_poly_type(a) == snek_float) {
		float delay = snek_poly_to_float(a);
		float secs = floorf(delay);
		float ns = floorf((delay - secs) * 1e9 + 0.5);

		struct timespec ts = {
			.tv_sec = (time_t) secs,
			.tv_nsec = ns
		};

		// nanosleep(&ts, NULL);
	}
	return SNEK_NULL;
}


snek_poly_t
snek_builtin_time_monotonic(void)
{
	struct timespec t;
	static time_t start_sec;

	// clock_gettime(CLOCK_MONOTONIC, &t);
	// if (!start_sec)
		// start_sec = t.tv_sec;
	// return snek_float_to_poly((float) (t.tv_sec - start_sec) + (float) t.tv_nsec / 1e9f);
	return snek_float_to_poly((float) 0);
}

snek_poly_t
snek_builtin_random_seed(snek_poly_t a)
{
	// srandom(a.u);
	return SNEK_NULL;
}

snek_poly_t
snek_builtin_random_randrange(snek_poly_t a)
{
	// return snek_float_to_poly(random() % (long int) snek_poly_get_float(a));
	return snek_float_to_poly(4 % (long int) snek_poly_get_float(a));
}

