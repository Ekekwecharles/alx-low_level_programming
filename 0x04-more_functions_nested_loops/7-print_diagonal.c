#include "main"

/**
 * print_diagonal - Draws a straight line using the character _.
 * @n: The number of \ characters to be printed.
 */
void print_diagonal(int n)
{
	int len, i;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (i = 0; i < len; i++)
				_putchar(' ');
			_putchar('\\');

			if (len == n - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
