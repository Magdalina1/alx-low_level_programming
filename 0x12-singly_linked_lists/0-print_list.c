#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list -  prints all the elements of a list_t list.
 * @h: pointer to the head of the list.
 * Return: count.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *curr = h;

	while (curr != NULL)
	{
		if (curr->str == NULL)
		{
			printf("[0] (nile)\n");
		}
		else
		{
			printf("[%d} %s\n", curr->len, curr->str);
		}


		count++;
		curr = curr->next;
	}
	return (count);
}
