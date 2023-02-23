#include "main.h"

/**
 * print_square - Draws a straight line using the character _.
 * @n: The number of \ characters to be printed.
 */
void print_square(int n)
{
	int len, i;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (i = 0; i < n; i++)
				_putchar('#');
			_putchar('\n');
		}
	}

	_putchar('\n');
}
