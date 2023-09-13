#include "search_algos.h"

/**
 * linear_search - Linear search algorithm
 * @array: input array
 * @size: size of the array
 * @value: value to search for
 * Return: return index of the value if found else -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
	{
		return (-1);
	}

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%li] = [%i]\n", x, array[x]);
		if (array[x] == value)
		{
			return (x);
		}
	}
	return (-1);
}
