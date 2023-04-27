#include <stdio.h>

/**
 * print_before_main - prints You're beat! and yet, you must allow,
 * \nI bore my house upon my back!\n.
 */

void __attribute__ ((constructor)) print_before_main()
{
	printf("You're beat! and yet , you must allow\n");
	printf("I bore my house upon my back!\n");
}
