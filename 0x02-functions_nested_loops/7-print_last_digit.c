#include "main.h"
/**
 * print_last_digit - prints last digit
 * @c: First operand
 * Return: 1 or 0
 */
int print_last_digit(int c)
{
	int result, val;

	if (c < 0)
	{
		val = c * -1;
		result = val % 10;
		_putchar(result + '0');
	} else
	{
		val = c;
		result = val % 10;
		_putchar(result + '0');
	}
	return (result);
}
