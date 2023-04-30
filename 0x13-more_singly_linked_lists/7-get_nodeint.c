#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head node of the list
 * @index: the index of the node , starting at 0.
 * Return: a pointer to the nth node or NULL if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node = head;
	unsigned int count = 0;

	while (count < index && current_node)
	{
		current_node = current_node->next;
		count++;
	}

	if (count == index && current_node)
		return (current_node);

	return (NULL);
}
