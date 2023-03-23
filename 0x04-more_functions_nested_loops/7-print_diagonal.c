#include "main.h"


/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: The number of lines to draw
 */


void print_diagonal(int n)
{
	int n;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('\\');
		}
	}
	_putchar('\n');
}
