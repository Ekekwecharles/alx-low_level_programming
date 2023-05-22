#include "main.h"
/**
 * _strcmp - compares string
 * @s1: Firest operand
 * @s2: second operand
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
