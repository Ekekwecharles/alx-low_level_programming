#include"main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: First parameter
 * @size: Second parameter
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		arr[i] = 0;
	return (arr);
}
