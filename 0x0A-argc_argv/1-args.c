#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: argument of count
 * @argv: argument of vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
