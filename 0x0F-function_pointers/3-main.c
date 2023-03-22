#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int (*opfunc_ptr)(int, int);

	int result = 0, num1 = 0, num2 = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][0] != '+' &&
			argv[2][0] != '-' &&
			argv[2][0] != '*' &&
			argv[2][0] != '/' &&
			argv[2][0] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' && argv[3][0] == '0') ||
			(argv[2][0] == '%' && argv[3][0] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	opfunc_ptr = get_op_func(argv[2]);

	result = (*opfunc_ptr)(num1, num2);
	printf("%d\n", result);


	return (0);
}
