#include "main"

/**
 * print_diagonal - Draws a straight line using the character _.
 * @n: The number of \ characters to be printed.
 */
void print_diagonal(int n)
{
	int len,i;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			i = 0;
			while (i < n-1)
				_putchar(' ');

			_putchar('\\');
	}

	_putchar('\n');
}
