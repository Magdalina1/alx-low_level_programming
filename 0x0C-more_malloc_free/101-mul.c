#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * isNumber - herbel fonction.
 * @str: string
 * Return: 0, 1
 */

int isNumber(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}


/**
 * main - multiplies two positive numbers.
 * @argc: the number of aurgement passed
 * @argv: an array of pointers two the aurgement
 * Return: 0 success 98 if faild
 */


int main(int argc, char *argv[])
{
	long int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	if (!isNumber(argv[1]) || !isNumber(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	num1 = atol(argv[1]);
	num2 = atol(argv[2]);

	printf("%ld\n", num1 * num2);

	return (0);
}
