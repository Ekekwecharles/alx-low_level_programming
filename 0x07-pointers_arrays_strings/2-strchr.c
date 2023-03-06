#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: First Operand
 * @c: Second
 * Return: A pointer to the filled memory area @s.
 */
char *_strchr(char *s, char c)
{
	int len = 0, i;
	char *ptr1, *ptr2;

	ptr2 = s;

	i = 0;
	while (*(ptr2 + i) != '\0')
	{
		len++;
		i++;
	}

	i = 0;
	while (i < len)
	{
		if (*(ptr2 + i) == c)
		{
			ptr1 = (ptr2 + i);
			return (ptr1);
		}
		else
		{
			i++;
			continue;
		}

	}
	return (NULL);
}

