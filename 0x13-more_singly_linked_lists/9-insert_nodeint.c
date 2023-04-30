#include "lists.h"

/**
 * insert_nodeint_at_index - that inserts a new node at a given position.
 * @head: pointer to the head node of the list.
 * @idx: index of the list where the new node should be added. starting at 0.
 * @n: value the store in the new node.
 * Return: address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *prev_node;
	listint_t *new_node;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	prev_node = *head;

	for (i = 0; prev_node && i < idx - 1; i++)
		prev_node = prev_node->next;

	if (!prev_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = prev_node->next;
	prev_node->next = new_node;

	return (new_node);
}
