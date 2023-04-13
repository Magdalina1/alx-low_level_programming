#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: the amount of memory to allocate
 * Return: a pointer to allocated memory if malloc fail
 * the fonction shoud cause normal process, value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
