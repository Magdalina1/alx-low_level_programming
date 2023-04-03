#include "main.h"
#include <string.h>
/**
 * _strspn - gets the length of a prefix substring.
 * @s: segment for bytes.
 * @accept: bytes to accept
 * Return: numChars
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int numChars = 0;

	while (*s && strchr(accept, *s++))
		numChars++;

	return (numChars);
}
