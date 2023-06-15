#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index index
 * of a dlistint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: the list where the new node should be added.
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *previous = NULL;

	if (head == NULL || *head == NULL)

		return (-1);


	if (index == 0)
	{
		if (current->next != NULL)
		{
			current->next->prev = NULL;
			*head = current->next;
		}
		else
		{
			*head = NULL;
		}
		free(current);
		return (1);
	}

	while (index > 0 && current != NULL)
	{
		previous = current;
		current = current->next;
		index--;
	}

	if (current == NULL)
		return (-1);

	if (previous != NULL)
		previous->next = current->next;

	if (current->next != NULL)
		current->next->prev = previous;
	free(current);
	return (1);
}
