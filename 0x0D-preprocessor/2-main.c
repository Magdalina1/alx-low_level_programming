#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - prints the name of the file it was compiled from new line.
 * Return: 0
 */

int main(void)
{
	char filename[256];

	if (getenv("FILENAME") != NULL)
	{
		strcpy(filename, getenv("FILENAME"));
	}
	printf("%s\n", filename);
	return (0);
}
