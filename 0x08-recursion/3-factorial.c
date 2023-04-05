#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: the number
 * Return: result
 */

int factorial(int n)
{
	int result = 1;
	int i = 2;

	if (n < 0)
	{
		return (-1);
	}

	for (i = 2; i <= n; i++)
	{
		result *= i;
	}

	return (result);
}
