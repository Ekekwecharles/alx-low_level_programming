#include <stdio.h>
#include <stdlib.h>

/**
 * main - Minimum number of coins for a change
 * @argc: First Parameter
 * @argv: Second parameter
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	num = atoi(argv[1]);
	if (num >= 25)
	{
		count += num / 25;
		num %= 25;
	}
	if (num >= 10)
	{
		count += num / 10;
		num %= 10;
	}
	if (num >= 5)
	{
		count += num / 5;
		num %= 5;
	}
	if (num >= 2)
	{
		count += num / 2;
		num %= 2;
	}
	if (num >= 1)
	{
		count += num;
	}
	printf("%d\n", count);
	return (0);
}
