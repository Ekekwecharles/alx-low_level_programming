#include "main.h"
/**
 * _abs - checks for lowercase
 * @c: First operand
 * Return: 1 or 0
 */
int _abs(int c)
{
	if (c < 0)
	{
		int i = c * -1;

		return (i);
	} else if (c >= 0)
	{
		return (c);
	}
	return (c);
}
