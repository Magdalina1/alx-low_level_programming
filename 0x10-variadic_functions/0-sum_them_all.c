#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: the number
 * Return: res
 */

int sum_them_all(const unsigned int n, ...)
{
	int res = 0;
	va_list args;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		res += va_arg(args, int);
	}
	va_end(args);

	return (res);
}
