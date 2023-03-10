#include "main.h"

/**
 * _memcpy - a function that fills memory with a constant byte.
 * @dest: First Operand
 * @src: Second
 * @n: third
 * Return: A pointer to the filled memory area @s.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *ptr = dest;

	while (i < n)
	{
		*(ptr + i) = src[i];
		i++;
	}
	return (dest);
}

