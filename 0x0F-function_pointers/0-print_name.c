#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_name - prints a name.
 * @name: name of person
 * @f: function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
