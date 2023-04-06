#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - that adds positive numbers.
 * @argc: argument of count
 * @argv: argument of vectore
 * Return: 1 if Error , atherwise 0
 */

int main(int argc, char *argv[])
{
	int total = 0;
	int i;
	unsigned int j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		total += atoi(argv[i]);
	}
	printf("%d\n", total);
	return (0);
}
