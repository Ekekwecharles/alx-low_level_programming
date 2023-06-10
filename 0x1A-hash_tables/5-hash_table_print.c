#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	/* Flag to check if it's the first key-value pair */
	int first = 1;
	hash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node != NULL)
		{
			if (first)
				first = 0;
			else
				printf(", ");

			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
		}
	}
	printf("}\n");
}
