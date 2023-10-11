#include "search_algos.h"

void free_skiplist(skiplist_t *list);

/**
 * init_express - Initializes the express lane of the linked list
 *
 * @list: Pointer to the head node of the list
 * @size: Number of nodes in the list
 */
void init_express(skiplist_t *list, size_t size)
{
	const size_t step = sqrt(size);
	size_t i;
	skiplist_t *save;

	for (save = list, i = 0; i < size; ++i, list = list->next)
	{
		if (i % step == 0)
		{
			save->express = list;
			save = list;
		}
	}
}

