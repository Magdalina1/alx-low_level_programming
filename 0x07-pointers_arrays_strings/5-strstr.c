#include "main.h"
#include <stddef.h>

/**
 * _strstr - that locates a substring.
 * @haystack:the string to be search.
 * @needle: the sub string to be located.
 * Return: haystack is found or Null is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}

	return (NULL);
}
