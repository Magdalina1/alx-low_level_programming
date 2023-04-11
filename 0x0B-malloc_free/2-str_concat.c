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
	char *concat_str;
	int i, j;
	size_t len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	concat_str = malloc((len1 + len2 + 1) * sizeof(char));
	if (concat_str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		concat_str[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
		concat_str[i + j] = s2[j];

	concat_str[i + j] = '\0';
	return (concat_str);
}
