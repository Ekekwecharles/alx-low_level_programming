#include "main.h"
/**
 * print_rev - reverse string
 * @s: First operand
 *
 */
void print_rev(char *s)
{
	int len = _strlen(s);
	char *start = (s + (len - 1));
	while (*start-- >= *s)
		_putchar(*start);

	_putchar('\n');
}
int _strlen(char *s)
{
        int sum = 0;

        while (*s++)
        {
                sum++;
        }

        return (sum);
}
