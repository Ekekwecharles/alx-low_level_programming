#include "main.h"

/**
 * checkprime- Checks for prime numbers
 * @n: First parameter
 * @m: second
 * Return: int
 */

int checkprime(int n, int m)
{
	if (n <= 2)
		return ((n == 2) ? 1 : 0);
	if (n % m == 0)
		return (0);
	if (m * m > n)
		return (1);
	return (checkprime(n, m + 1));
}
/**
 * is_prime_number- Checks for prime numbers
 * @n: First parameter
 * Return: int
 */
int is_prime_number(int n)
{
	return (checkprime(n, 2));
}
