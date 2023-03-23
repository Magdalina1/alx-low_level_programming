#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14.
 */

void more_numbers(void)
{
	int  i, j;

	for (i = 0 ; i <= 14 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
			putchar(i + '0');
	}
	putchar('\n');
}


