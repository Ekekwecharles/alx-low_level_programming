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
	void *arr;
	char *filler;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(size * nmemb);

	if (arr == NULL)
		return (NULL);
	filler = arr;

	for (i = 0; i < (size * nmemb); i++)
		filler[i] = '\0';
	return (arr);
}
