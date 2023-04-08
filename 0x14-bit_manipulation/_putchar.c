#include "main.h"

void _putchar(char c)
{
	write(STD0UT_FILENO, &c, 1);
}
