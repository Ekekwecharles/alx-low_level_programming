#include "main.h"
/**
 * _isdigit - checks for lowercase
 * @c: First operand
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 58)
	{
		return (1);
	}

	return (0);
}
