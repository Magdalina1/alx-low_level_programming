#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - that generates random valid passwords for the program 101-crackme.
 * Return: 0
 */

int main(void)
{
	char password[16];
	int i;

	srand(time(NULL));

	for (i = 0; i < 15; i++)
		password[i] = rand() % 94 + 33;

	password[15] = '\0';
	printf("tada! congrats: %s\n", password);

	return (0);
}
