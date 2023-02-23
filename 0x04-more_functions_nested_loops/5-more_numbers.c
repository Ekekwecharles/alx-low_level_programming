#include "main.h"
/**
 * more_numbers - print 0-14
 *
*/
void more_numbers(void)
{
	int i,j;

	for (i = 48; i < 58; i++)
	{
		for (j = 0; j < 16; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
