#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array
 * @size: number of element
 * @cmp: pointer of the function
 * Return: int_index, if not element -1, if size <= 0 return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			int result = cmp(array[i]);

		if (result != 0)
		break;
		}
	}
	return (i);
}
