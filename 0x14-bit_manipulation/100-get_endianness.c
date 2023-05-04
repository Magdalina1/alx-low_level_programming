#include "main.h"

/**
 * get_endianness - that checks the endianness.
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	unsigned int x = 0x76543210;

	char *c = (char *) &x;

	return ((int)*c);
}
