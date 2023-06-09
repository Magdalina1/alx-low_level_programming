#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: the first string to concatenated
 * @s2: the secound string of concatenated
 * @n: the maximain namber of byts of s2 to concatenate
 * Return: a pointer to concatenated string, NULL if faild
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	char *concat;
	unsigned int len_s1 = 0, len_s2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;

	if (n >= len_s2)
		n = len_s2;

	concat = malloc((len_s1 + n + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
	{
		concat[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		concat[len_s1 + i] = s2[i];
	}
	concat[len_s1 + n] = '\0';

	return (concat);
}
