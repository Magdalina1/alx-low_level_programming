#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 * @h: a pointer to the head of the list to free.
 * Return: size of the list that was free’d.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *temp;

	while (*h)
	{
		size++;
		if (*h > (*h)->next)
		{
			temp = *h;
			*h = (*h)->next;
			free(temp);
		}
		else
		{
			free(*h);
			*h = NULL;
		}
	}

	return (size);
}
