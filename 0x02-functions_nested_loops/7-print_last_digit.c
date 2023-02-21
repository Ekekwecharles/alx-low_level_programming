#include "main.h"
/**
 * print_last_digit - prints last digit
 * @c: First operand
 * Return: 1 or 0
 */
int print_last_digit(int c)
{
	int result, val;

	val = c % 10;

	if (val < 0)
	{
		val = val * -1;
		result = val;
		_putchar(result + '0');
	} else
	{
		result = val;
		_putchar(result + '0');
	}
	return (result);
}
