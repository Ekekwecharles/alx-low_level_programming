#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);

/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size of the array
 *
 * Return: A pointer to new hash table if success
 *		Null if fail
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_hash_table;
	unsigned long int i;

	new_hash_table = malloc(sizeof(shash_table_t));

	if (new_hash_table == NULL)
		return (NULL);

	new_hash_table->size = size;
	/* creates an array of pointers to shash_node_t */
	new_hash_table->array = malloc(sizeof(shash_node_t *) * size);

	if (new_hash_table->array == NULL)
		return (NULL);

	/* Initializes the array to NULL */
	for (i = 0; i < size; i++)
		new_hash_table->array[i] = NULL;

	new_hash_table->shead = NULL;
	new_hash_table->stail = NULL;

	return (new_hash_table);
}


/**
 * shash_table_set - Adds an element to the hash table
 * @ht: pointer to The Hash table
 * @key: The key
 * @value: the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *temp;
	char *value_dup;
	unsigned long int indx;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_dup = strdup(value);
	if (value_dup == NULL)
		return (0);
	/* calls the hash function */
	indx = key_index((const unsigned char *)key, ht->size);
	temp = ht->shead;
	while (temp)
	{
		/* If an item has the same key, its replaced */
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = value_dup;
			return (1);
		}
		temp = temp->snext;
	}

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
	{
		free(value_dup);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(value_dup);
		free(new_node);
		return (0);
	}
	new_node->value = value_dup;
	new_node->next = ht->array[indx];
	ht->array[indx] = new_node;

	if (ht->shead == NULL)
	{
		new_node->sprev = NULL;
		new_node->snext = NULL;
		ht->shead = new_node;
		ht->stail = new_node;
	}
	/*
	 * checks if the key(ascii value) of the first item on the array(hash table)
	 * is greater than the newly created node, no need to traverse the list,
	 * the new node is added at the first index
	 */
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext != NULL && strcmp(temp->snext->key, key) < 0)
			temp = temp->snext;
		new_node->sprev = temp;
		new_node->snext = temp->snext;
		if (temp->snext == NULL)
			ht->stail = new_node;
		else
			temp->snext->sprev = new_node;
		temp->snext = new_node;
	}

	return (1);
}

/**
 * shash_table_get - retrieves an element from the hash table
 * @ht: The Hash table
 * @key: The key
 * Return: The value associated with the key if it succeeded, NULL otherwise
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int indx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	/* gets the index of that particular key */
	indx = key_index((const unsigned char *)key, ht->size);
	if (indx >= ht->size)
		return (NULL);

	node = ht->shead;
	/* The keys are unique */
	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->snext;

	return ((node == NULL) ? NULL : node->value);
}

/**
 * shash_table_print - prints a hash table
 * @ht: pointer to the hash table
 */

void shash_table_print(const shash_table_t *ht)
{
	unsigned long int i;
	/* Flag to check if it's the first key-value pair */
	int first = 1;
	shash_node_t *node;

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

/**
 * shash_table_print_rev - prints a hash table
 * @ht: pointer to the hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int i;
	/* Flag to check if it's the first key-value pair */
	int first = 1;
	shash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	for (i = ht->size; i > 0; i--)
	{
		node = ht->array[i - 1];

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

/**
 * shash_table_delete - function that deletes a hash table
 * @ht: Pointer to hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *next, *node;

	if (ht == NULL)
		return;

	/* Free each node in the hash table */
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

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
