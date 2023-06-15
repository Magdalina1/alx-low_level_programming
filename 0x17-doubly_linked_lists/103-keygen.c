#include <stdio.h>
#include <string.h>

/**
 * generate_key - generates a valid key for crackme5
 * @username: the username to generate a key for
 * This function calculates the sum of the ASCII values of the username,
 * then XORs it with 0x55 and ANDs it with 0xff to get a one-byte key.
 * It prints the key as a string to the standard output.
 */

void generate_key(char *username)
{
	int key;
	int i;
	int sum = 0;

	for (i = 0; i < strlen(username); i++)
	{
		sum += username[i];
	}

	key = (sum ^ 0x55) & 0xff;
	printf("%s\n", &key);
}

/**
 * main - entry point for the keygen program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 1 on error
 * This function checks if number of arguments is 2, then calls generate_key
 * with second argument as the username. If the number of arguments is not 2,
 * it prints a usage message and returns 1.
 */

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Usage: ./keygen5 username\n");
		return (1);
	}
	generate_key(argv[1]);

	return (0);
}

