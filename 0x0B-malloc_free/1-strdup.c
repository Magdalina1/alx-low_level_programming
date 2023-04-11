#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: the string to duplicate
 * Return: NULL if faild
 * on success a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	size_t len = strlen(str);
	char *newStr = malloc(len + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	if (newStr == NULL)
	{
		return (NULL);
	}

	strcpy(newStr, str);
	return (newStr);
}
