#include "main.h"

/**
 * int_strlen - returns the length of a string.
 * @s: length of string
 * Return: count
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
