#include "main.h"
/**
 * _islower - checks for lowercase
 * @c: First operand
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
