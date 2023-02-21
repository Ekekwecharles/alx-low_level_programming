#include "main.h"
/**
 * print_sign - checks for +ve -ve 0
 * @n: First operand
 * Return: 1 or 0
 */
int print_sign(int n)
{
	if (n  > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar(48);
	return (0);

}
