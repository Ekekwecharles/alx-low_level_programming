#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * is_palindrome- checks for palindrome
 * @s: First parameter
 * Return: int
 */
int is_palindrome(char *s)
{
	int len, result;
	char *copy;

	len = strlen(s);

	if (len <= 1)
		return (1);

	if (s[0] != s[len - 1])
		return (0);

	copy = (char *)malloc(len);

	strncpy(copy, s + 1, len - 2);
	copy[len - 2] = '\0';
	result = is_palindrome(copy);
	free(copy);
	return (result);
}
