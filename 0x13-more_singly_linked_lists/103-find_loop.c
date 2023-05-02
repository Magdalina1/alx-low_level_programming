#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: A pointer to the head of the list to search.
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast, *slow;

	if (!head || !(head->next))
		return (NULL);

	fast = head->next->next;
	slow = head->next;

	while (fast && fast->next)
	{
		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);

		}

		fast = fast->next->next;
		slow = slow->next;
	}

	return (NULL);
}
