#include "lists.h"

/**
 * sum_dlistint - returns sum of all data (n) of a dlistint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 * Return: if the list is empty, return 0.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
