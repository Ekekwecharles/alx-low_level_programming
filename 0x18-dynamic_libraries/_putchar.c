#include "main.h"
#include <unistd.h>

int _putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
	return (1);
}	
