#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_name - prints a name.
 * @name: name of person
 * @f: fonction
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
