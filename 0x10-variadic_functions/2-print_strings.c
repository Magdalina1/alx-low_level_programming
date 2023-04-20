#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed betwen strings
 * @n: numeber of strngs to passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
		printf("\n");
		va_end(args);
}
