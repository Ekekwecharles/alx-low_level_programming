#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: Pointer to hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *next;

	if (ht == NULL)
		return;

	/* Free each node in the hash table */
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *node = ht->array[i];

		while (node != NULL)
		{
			next = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = next;
		}
	}

	/* Free the array and he hash table itself */
	free(ht->array);
	free(ht);
}
