#include "main.h"
/**
* puts_half -> print in 2s
* @str: the string to be printed in rev
*/
void puts_half(char *str)
{
	int len = 0, index = 0;

	while (str[index++])
		len++;

	for (index = 0; index < len / 2; index++)
	{
		if (len % 2 != 0)
			_putchar(str[index + len / 2]);
		else
			_putchar(str[index + len / 2]);
	}
	_putchar('\n');
}
