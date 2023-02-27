#include "main.h"
/**
 * _strlen - calc strlen
 * @s: First operand
 * Return: sum
 */
int _strlen(char *s)
{
	int sum = 0, i = 0;

	while (*s[i] != '\0')
	{
		sum += 1;
		i++;
	}
	return (sum);
}
