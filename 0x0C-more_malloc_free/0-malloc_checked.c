#include"main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory
 * @b: First parameter
 * Return: void pointer
 */

void *malloc_checked(unsigned int b)
{

	void *arr = malloc(b);

	if (arr == NULL)
		exit(98);
	return (arr);
}
