#include "main.h"

/**
 * _memset - that fills memory with a constant byte.
 * @s: the size of memory to print.
 * @b: the adress of memory to print.
 * @n: the int
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int n;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
