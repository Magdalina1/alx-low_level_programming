#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to memory
 * @old_size: the size of allocated space for ptr
 * @new_size: the new_size of the new memory block
 * Return: pointer to the new space in memory,
 * ptr if new_size == old_size, call free and return NULL
 * if new_size == 0 NULL if faild
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int min_size;

	new_ptr = malloc(new_size);

	if (ptr == NULL)
	{
		return (new_ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	min_size = old_size < new_size ? old_size : new_size;
	memcpy(new_ptr, ptr, min_size);

	if (new_size > old_size)
	{
		memset((unsigned char *)new_ptr + old_size, 0, new_size - old_size);
	}

	free(ptr);

	return (new_ptr);
}

