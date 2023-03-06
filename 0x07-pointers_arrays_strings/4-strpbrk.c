#include "main.h"

/**
 * _strbrk - a function that locates a character in a string.
 * @s: First Operand
 * @accept: Second
 * Return: A pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s; i++, s++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return ('\0');
}

