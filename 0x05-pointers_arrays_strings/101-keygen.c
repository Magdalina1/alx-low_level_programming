#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - that generates random valid passwords for the program 101-crackme.
 * Return: 0
 */

int main(void)
{
	char password[10];
	int i;

	srand(time(NULL));

	for (i = 0; i < 10; i++)
		password[i] = (rand() % 94) + 33;

	password[9] = '\0';
	printf("password: %s\n", password);

	return (0);
}
