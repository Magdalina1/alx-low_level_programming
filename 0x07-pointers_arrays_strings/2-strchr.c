#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: the string to be checked
 * @c: the char to find in s.
 * Return: c if found, NULL if not found.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
