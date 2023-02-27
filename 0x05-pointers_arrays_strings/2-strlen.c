#include "main.h"
/**
 * _strlen - calc strlen
 * @s: First operand
 * Return: sum
 */
int _strlen(char *s)
{
	int sum = 0;

	while (*s != '\0')
	{
		sum++;
		*s++;
	}

	return (sum);
}
