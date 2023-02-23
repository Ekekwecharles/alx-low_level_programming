#include "main.h"
/**
 * _isupper - checks for lowercase
 * @c: First operand
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
