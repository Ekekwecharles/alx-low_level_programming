#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 *	need to flip to get from one number to another.
 * @n: First parameter
 * @m: Second
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0;
	unsigned long int xor;

	xor = n ^ m;
	while (xor != 0)
	{
		if (xor & 1)
			bits++;
		xor >>= 1;
	}

	return (bits);
}
