#include "main.h"

/**
 * _strbrk - a function that locates a character in a string.
 * @s: First Operand
 * @accept: Second
 * Return: A pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
