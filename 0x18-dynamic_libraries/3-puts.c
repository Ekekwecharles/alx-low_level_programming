#include "main.h"
/**
 * _puts - swap two integers
 * @str: First operand
 *
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
