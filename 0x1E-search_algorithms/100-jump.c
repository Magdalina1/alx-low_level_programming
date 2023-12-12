#include "search_algos.h"
#include <math.h>

/* remember compiling math.h with gcc requires `-lm` */

size_t min(size_t a, size_t b);

/**
 * min - returns the minimum of two size_t values
 * @a: first value
 * @b: second value
 * Return: `a` if lower or equal to `b`, `b` otherwise
 */

size_t min(size_t a, size_t b)
{
	return (a <= b ? a : b);
}
