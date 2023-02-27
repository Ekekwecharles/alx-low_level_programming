#include "main.h"
/**
 * print_rev - reverse string
 * @s: First operand
 *
 */
void print_rev(char *s)
{
	int len = _strlen(*s);
	char *start = (s + (len - 1));

	while (*start-- >= *s)
		_putchar(*start);

	_putchar('\n');
}
