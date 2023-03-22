#include "3-calc.h"

/**
 * get_op_func - Selects the correct function to perform
 *               the operation asked by the user.
 * @s: The operator passed as argument.
 *
 * Return: A pointer to the function corresponding
 *         to the operator given as a parameter.
 */

int (*get_op_func(char *s))(int, int)
{
	int (*ops[5])(int, int) = {op_add, op_sub, op_mul, op_div, op_mod};

	if (*s == '+')
		return (ops[0]);
	else if (*s == '-')
		return (ops[1]);
	else if (*s == '*')
		return (ops[2]);
	else if (*s == '/')
		return (ops[3]);
	else if (*s == '%')
		return (ops[4]);

	return (ops[4]);
}
