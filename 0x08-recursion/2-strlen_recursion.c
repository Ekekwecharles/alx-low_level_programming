#include "main.h"
/**
 * _strlen_recursion- Strlen Recursion
 * @s: First parameter
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

