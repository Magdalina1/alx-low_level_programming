#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to the head of the list.
 * Return: len
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;
	const list_t *curr;

	curr = h;

	if (h == NULL)
	{
		return (0);
	}

	while (curr != NULL)
	{
		len++;
		curr = curr->next;
	}

	return (len);
}
