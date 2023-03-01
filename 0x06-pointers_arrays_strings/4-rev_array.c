#include "main.h"

/**
 * reverse_array - reverses contetnt of array
 * @a: First operand
 * @n: Second operand
 */

void reverse_array(int *a, int n)
{
	int *start = a;
	int *end = a + n - 1;
	
	while (start < end)
	{
		int temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}

