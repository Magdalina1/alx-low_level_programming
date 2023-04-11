#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string to concatenated
 * @s2: second string to concatenated
 * Return: on seccess a pointer to the sting,
 * NULL if faild
 */

char *str_concat(char *s1, char *s2)
{
	char *result = malloc(strlen(s1) + strlen(s2) + 2);

	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strcat(result, s2);
	return (result);
}
