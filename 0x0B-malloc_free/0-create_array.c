#include "main.h"
#include <stdlib.h>

/**
 * create_array - Initializes an array of character with a specifiec character
 * @size: First parameter
 * @c: second
 * Return: ponter
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = (char *)malloc(size * sizeof(char));

	if (size == 0)
		return ('\0');
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
