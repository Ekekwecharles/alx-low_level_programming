#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Initializes an array of character with a specifiec character
 * @s1: First parameter
 * @s2: second
 * Return: ponter
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";


	arr = (char *)malloc((sizeof(s1) + sizeof(s2)) * sizeof(char));

	if (arr == NULL)
		return (NULL);
	i = 0;
	while (*s1)
	{
		arr[i] = *s1;
		s1++;
		i++;
	}
	while (*s2)
	{
		arr[i] = *s2;
		s2++;
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

