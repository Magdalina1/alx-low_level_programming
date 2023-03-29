#include "main.h"

/**
 * rot13 - that encodes a string using rot13.
 * @str: string to be encoded
 * Return: str
 */

char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			int offset = str[i] < 'n' || str[i] < 'N' ? 13 : -13;

			str[i] += offset;
		}
	}
	return (str);
}
