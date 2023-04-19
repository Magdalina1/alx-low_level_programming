#include <stdio.h>
#include <stdlib.h>

/**
 * main - that prints the opcodes of its own main function.
 * @argc: aurgement of compile
 * @argv: aurgement of vule
 * Return: 1, 2, 0
 */

int main(int argc, char *argv[])
{
	int num_bytes;
	int offset;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_bytes = atoi(argv[1]);
	offset = 0;

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (offset < num_bytes)
	{
		printf("%02x", *(unsigned char *)((void *)main + offset));
		offset++;
	}
	printf("\n");

	return (0);
}

