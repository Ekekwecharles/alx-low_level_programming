#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Allocates memory
 * @ptr: First parameter
 * @old_size: Second
 * @new_size: Third
 * Return: void pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *arr1, *arr2;
	char *filter;
	char *filter2;

	filter2 = ptr;	
	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		arr1 = malloc(new_size);
		return (arr1);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	arr2 = malloc(new_size);
	filter = arr2;
	for (i = 0; i < old_size; i++)
	{
		filter[i] = filter2[i];
	}

	return (arr2);
			
}
