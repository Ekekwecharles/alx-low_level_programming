#include "main.h"

/**
 * clear_bit - set bit at index to 0
 * @n: First parameter
 * @index: second
 *
 * Return: 1 is sucess
 *		-1 if fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
