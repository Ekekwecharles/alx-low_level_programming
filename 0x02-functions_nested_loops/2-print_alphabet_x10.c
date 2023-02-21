#include "main.h"
/**
 * print_alphabet_x10 - This function prints the alphabet in lowercase x 10
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		j = 97;
		while (j < 123)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
