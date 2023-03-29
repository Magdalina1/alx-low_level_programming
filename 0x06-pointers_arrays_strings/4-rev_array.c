#include "main.h"

/**
 * reverse_array - that reverses the content of an arrayof integers.
 * @a: the array.
 * @n: int
 */

void reverse_array(int *a, int n)
{
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
