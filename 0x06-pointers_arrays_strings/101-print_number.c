#include "main.h"

/**
 * print_number - that prints an integer.
 * @n: integer to print
 */

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -i;
	}
	if ((i / 10) > 0)
		print_number(i / 10);

	_putchar((i % 10) + '0');
}
