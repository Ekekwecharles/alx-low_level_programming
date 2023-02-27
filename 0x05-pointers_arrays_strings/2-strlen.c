#include "main.h"
/**
 * _strlen - calc strlen
 * @s: First operand
 * Return: sum
 */
int _strlen(char *s)
{
	int sum = 0;

	while (*s  != '\0')
	{
		sum += 1;
		*s += 1;
	}
	return (sum);
}
