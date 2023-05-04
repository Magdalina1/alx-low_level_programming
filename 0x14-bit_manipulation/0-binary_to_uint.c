#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars.
 * Return: the coverted number, or 0 if failed.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		res = res << 1;
		if (b[i] == '1')
			res = res + 1;
	}

	return (res);
}
