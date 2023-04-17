#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog.
 * @d: the pointer of the dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
	printf("Age: %d\n", d->age);
	printf("Breed: %s\n", d->breed == NULL ? "(nil)" : d->breed);
	printf("Weight: %f\n", d->weight);
}
