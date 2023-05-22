#include "main.h"

/**
 * _strspn - a function that locates a character in a string.
 * @s: First Operand
 * @accept: Second
 * Return: A pointer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				count++;
		}
	}
	return (count);
}

