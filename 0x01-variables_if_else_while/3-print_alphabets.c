#include <stdio.h>
/**
 * main - ACII
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int lowercase_a = 97;
	int uppercase = 65;

	for (i = 0; i < 26; i++)
	{
		putchar(lowercase_a + i);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(uppercase + i);
	}
	putchar('\n');
	return (0);
}
