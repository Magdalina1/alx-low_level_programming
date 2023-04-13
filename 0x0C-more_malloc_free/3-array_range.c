#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: the minum value of array
 * @max: the maximan value of array
 * Return: a pointer to the newly created array,NULL if min > max or faild
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;
	int arr_size;

	if (min > max)
	{
		return (NULL);
	}
	arr_size = max - min + 1;

	arr = malloc(arr_size * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < arr_size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
