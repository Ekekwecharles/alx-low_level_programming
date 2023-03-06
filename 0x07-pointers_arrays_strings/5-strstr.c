#include "main.h"

/**
 * _strstr - a function that locates a string in a string.
 * @haystack: First Operand
 * @needle: Second
 * Return: A pointer
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;
	for (; *haystack; haystack++)
	{
		for (h = haystack, n = needle; *h && *n && (*h == *n); h++, n++);
		if(!*n)
			return (char *)haystack;
	}
	return (NULL);
}

