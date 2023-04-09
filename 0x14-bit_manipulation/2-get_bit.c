#include "main.h"
#include <stdlib.h>

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
	unsigned int count = 0, copy = n, i;
	char *buffer;
	int val;

	while (copy > 0)
	{
		copy = copy / 2;
		count++;
	}

	buffer = malloc(sizeof(int) * count);

	if (buffer == NULL)
		return (-1);

	i = 0;
	copy = n;
	while (i < count)
	{
		buffer[i++] = (copy % 2);
		copy = copy / 2;
	}
	if (index >= count)
		return (-1);

	val = buffer[index];
	free(buffer);

	return (val);
}
