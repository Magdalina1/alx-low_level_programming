#include "main.h"

/**
 * string_toupper - that changes all lowercase letters.
 * @:
 * @str:
 * Return: str
 */

char *string_toupper(char *)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
