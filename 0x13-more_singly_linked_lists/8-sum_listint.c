#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n),
 * of a listint_t linked list.
 * @head: pointer to the head node of the list.
 * Return: if the list is empty, return 0.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current_node = head;

	while (current_node)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}

	return (sum);
}
