#include "main.h"

/**
 * set_bit - set bit at ibdex to 1
 * @n: First parameter
 * @index: second
 *
 * Return: 1 is sucess
 *		-1 if fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n |= (1 << index);
	return (1);
}
