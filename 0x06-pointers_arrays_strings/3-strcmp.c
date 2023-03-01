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


/**{
	if (*s1 > *s2)
		return (15);
	else if (*s2 > *s1)
		return (-15);
	else
		return (0);
}
*/
