#include "main.h"
/**
 * string_toupper - To uppercase
 * @c: First parameeter
 * Return: char
 *
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] = c[i] - 32;
		}
	}
	return (c);
}

