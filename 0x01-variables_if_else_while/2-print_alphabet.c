#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main assing and ptint a random nuber to the veriable n
 * Return:Always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	print("last digit of %i is %i and is ", n, (n % 10));

	if ((n % 10) > 5)
	{
		printf("greater than 5\n");
	}	
	if else((n % 10) == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("less than 6 and not 0\n"0);
	}	

	return (0);
}