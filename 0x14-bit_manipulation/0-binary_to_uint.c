#include "main.h"

/**
 * binary_to_uint - converts binary to int
 * @b: First parameter
 *
 * Return: converted integer if success
 * 		0 if fail
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, mul = 1, count = 0, j;
	unsigned int res = 0;

	if (b == NULL)
		return (0);

	while(b[i])
	{
		if (b[i] < 48 || b[i] > 49)
			return (0);
		i++;
		count++;
	}

	for(i = count - 1; i >= 0; i--)
	{
		j = count - 1 - i;
		while(j != 0)
		{
			mul *= 2;
			j--;
		}
		res += (b[i] - '0') * mul;
		mul = 1;

	}
	return (res);
}

