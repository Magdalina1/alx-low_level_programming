#include "main.h"

/**
 * print_sing - of number.
 * @n: the number to be checked.
 * Return: 1 for positive , 0 for zero , -1 for nagative.
 */

int print_sing(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
