#include "lists.h"

/**
 * *get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: index of the list where the new node.
 * Return: the nth node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;

	while (current != NULL && index > 0)
	{
		current = current->next;
		index--;
	}

	return (current);
}
