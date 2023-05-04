#include "main.h"

/**
 * flip_bits - returns the number of bits,
 * you would need to flip to get from one number to another.
 * @n: the 1a number.
 * @m: the 2and number.
 * Return: number of bits to be flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m;
	unsigned int count = 0;

	while (flipped > 0)
	{
		count += flipped & 1;
		flipped >>= 1;
	}

	return (count);
}

