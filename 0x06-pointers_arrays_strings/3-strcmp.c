#include "main.h"

/**
 * _strcmp - that compares two strings.
 * @s1: the first string to be comperd.
 * @s2: the second string to be comperd.
 * Return: result
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
