#include "main.h"
/**
 * swap_int - swap two integers
 * @a: First operand
 * @b: Second operand
 *
 */
void swap_int(int *a, int *b)
{
	int swp = *b;
	*b = *a;
	*a = swp;
}
