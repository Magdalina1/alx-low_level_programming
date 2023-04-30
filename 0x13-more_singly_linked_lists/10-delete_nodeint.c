#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index,
 * of a listint_t linked list.
 * @head: pointer to the head node of the list.
 * @index: is the index of the node that should be deleted. Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node_to_delete;
	listint_t *prev_node;
	unsigned int i;

	if (!head || !*head)
		return (-1);

	node_to_delete = NULL;

	if (index == 0)
	{
		node_to_delete = *head;
		*head = (*head)->next;
	}
	else
	{
		prev_node = *head;

		for (i = 0; prev_node && i < index - 1; i++)
			prev_node = prev_node->next;

		if (!prev_node || !prev_node->next)
			return (-1);

		node_to_delete = prev_node->next;
		prev_node->next = node_to_delete->next;
	}

	free(node_to_delete);
	return (1);
}
