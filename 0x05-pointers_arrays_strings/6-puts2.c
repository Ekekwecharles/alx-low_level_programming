#include "main.h"
/**
* puts2 -> print in 2s
* @str: the string to be printed in rev
*/
void puts2(char *str)
{
	int len = 0, index = 0;

	while (str[index++])
		len++;

	for (index = 0; index < len; index++)
	{
		if (index % 2 == 0)
			_putchar(str[index]);
	}
	_putchar('\n');
}
