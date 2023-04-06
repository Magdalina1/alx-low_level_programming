#include <stdio.h>

/**
 * main - that prints its name, followed by a new line.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	char *name = argv[0];

	printf("%s\n", name);
	printf("Number of arguments passed: %d\n" , argc);
	return (0);
}
