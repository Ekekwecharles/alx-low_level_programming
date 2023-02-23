#include "main.h"
/**
 * print_line - prints _putchar
 *
 * @n: The number of _ characters to be printed.
*/
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}else
	{
		while (n--)
		{
			_putchar('-');
		}
	}
	_putchar('\n');
}
