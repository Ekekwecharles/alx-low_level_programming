#include "hash_tables.h"

/**
 * hash_table_get - retrieves an element to the hash table
 * @ht: The Hash table
 * @key: The key
 * Return: The value associated with the key if it succeeded, NULL otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int indx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	/* gets the index of that particular key */
	indx = key_index((const unsigned char *)key, ht->size);
	if (indx >= ht->size)
		return (NULL);

	node = ht->array[indx];
	/* The keys are unique */
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
