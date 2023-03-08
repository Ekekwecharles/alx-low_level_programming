#include "main.h"

/**
 * sqrt_helper- function helper
 * @n: First parameter
 * @start: Second
 * @end: third
 * Return: int
 */
int sqrt_helper(int n, int start, int end)
{
	int mid, mid_sq;

	if (start > end)
		return (-1);
	mid = (start + end) / 2;
	mid_sq = mid * mid;

	if (mid_sq == n)
		return (mid);
	else if (mid_sq < n)
		return (sqrt_helper(n, mid + 1, end));
	else
		return (sqrt_helper(n, start, mid - 1));
}


/**
 * _sqrt_recursion- finds square of a number
 * @n: First parameter
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqrt_helper(n, 0, n));
}
