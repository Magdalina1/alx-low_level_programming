#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: the pointer to the number to be modifeid
 * @index: the index of the bet to be set.
 * Return: 1 if it worked, or -1 if error.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);

	*n = *n | (1 << index);

	return (1);
}
