#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Add positive numbers
 * @argc: First Parameter
 * @argv: Second parameter
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum = 0, num, i, j;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		const char *arg = argv[i];

		for (j = 0; arg[j] != '\0'; j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		num = atoi(arg);
		if (num < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
