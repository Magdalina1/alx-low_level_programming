#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src.
 * @dest: destination of value
 * @src: the sourse
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
