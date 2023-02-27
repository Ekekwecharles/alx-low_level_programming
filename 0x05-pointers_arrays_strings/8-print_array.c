#include "main.h"
#include <stdio.h>
/**
* print_array -> print in 2s
* @a: the string to be printed in rev
* @n: Second par
*/
void print_array(int *a, int n)
{
	int index = 0;

	if (n > 0)
	{
		for (index = 0; index < n; index++)
		{
			if (index == n - 1)
				printf("%d\n", a[index]);
			else
				printf("%d, ", a[index]);
		}
	} else
		printf("\n");
}
