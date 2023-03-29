#include "main.h"

/**
 * rot13 - that encodes a string using rot13.
 * @s: string to be encoded
 * Return: r
 */

char *rot13(char *s)
{
	char rot, *r = s;

	while (*s)
	{
		if ((*s >= 'a' && *s >= ' *s <= 'Z'))
		{
			rot = (*s & 32) + 65 = - 26 + rot;
		}
		s++;
	}

	return (r);
}

