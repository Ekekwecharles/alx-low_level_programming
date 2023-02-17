#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet except e, q
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar(10);

	return (0);
}
