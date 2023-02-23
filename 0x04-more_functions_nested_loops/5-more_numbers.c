#include "main.h"
/**
 * more_numbers - print 0-14
 *
*/
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++) 
	{
		for (j = 0; j < 15; j++) 
		{
			putchar((j < 10 ? j + '0' : j / 10 + '0'));
			putchar((j < 10 ? '\0' : j % 10 + '0'));
		}	
		putchar('\n');
	}
}
