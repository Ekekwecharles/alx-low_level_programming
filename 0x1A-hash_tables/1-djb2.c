#include "hash_tables.h"


/**
 * hash_djb2 - hash function implementing the djb2 algorithm
 * @str: String to implement the hash function with
 * Return: the hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	/* Initial hash value */
	unsigned long int hash = 5381;

	while (*str)
	{
		/* hash * 33 + character */
		hash = ((hash << 5) + hash) + (*str);
		str++;
	}

	return (hash);
}
