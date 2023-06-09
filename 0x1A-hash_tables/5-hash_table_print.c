#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: A pointer to the hash table to print.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	int is_first = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (!is_first)
			{
				printf(", ");
			}
			printf("'%s': '%s'", node->key, node->value);
			is_first = 0;
			node = node->next;
		}
	}
	printf("}\n");
}
