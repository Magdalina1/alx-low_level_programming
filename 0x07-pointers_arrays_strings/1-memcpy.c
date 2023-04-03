#include "main.h"

/**
 * _memcpy - that copies memory area.
 * @dest: destination to paste.
 * @src: the source copied of memory area.
 * @n: the number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
