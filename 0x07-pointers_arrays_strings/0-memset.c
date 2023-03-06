#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: First Operand
 * @b: Second
 * @n: third
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

