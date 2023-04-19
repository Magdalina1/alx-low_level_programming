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
	int (*adress)(int, char **) = main;
	unsigned char m;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_bytes = atoi(argv[1]);

	if (num_bytes <= 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (offset = 0; offset < num_bytes; offset++)
	{
		m = *(unsigned char *)adress;
		printf("%02x", m);

		if (offset == num_bytes - 1)
			continue;
		printf(" ");
		adress++;
	}
	printf("\n");

	return (0);
}

