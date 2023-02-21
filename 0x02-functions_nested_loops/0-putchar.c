#include "main.h"
/**
 * main - prints _putchar
 *
 * Return: 0
*/
int main(void)
{
	char msg[] = "_putchar\n";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(msg[i]);
	}

	return (0);
}
