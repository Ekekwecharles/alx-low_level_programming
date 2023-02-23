#include "main.h"
/**
 * print_line - prints _putchar
 *
 * @n: The number of _ characters to be printed.
*/
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}else
	{
		i = 0;
		while (i < n)
		{
			_putchar('_');
			i++
		}
	}
	_putchar('\n');
}
