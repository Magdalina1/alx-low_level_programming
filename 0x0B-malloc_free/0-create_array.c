#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it.
 * @c: char
 * @size: size of the memory to print
 * Return: NULL if size 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (0);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
