#include <stdio.h>

/**
 * print_statement - prints You're beat! and yet, you must allow,
 * \nI bore my house upon my back!\n.
 */

void __attribute__ ((constructor)) print_statement()
{
	printf("You're beat! and yet , you must allow\n");
	printf("I bore my house upon my back!\n");
}
