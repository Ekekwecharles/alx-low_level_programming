#include "main.h"

/**
 * get_bit -return value of a bit at a given index
 * @n: First parametr
 * @index: second
 *
 * Return: value at index if success
 *		-1 if fail
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;
	return ((n & mask) ? 1 : 0);
}
