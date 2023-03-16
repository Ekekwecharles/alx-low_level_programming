#include"main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: First parameter
 * @s2: Second
 * @n: Third
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, size = 0, len1 = 0, len2 = 0;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	while (s1[i])
	{
		len1++;
		i++;
	}

	i = 0;
	while (s2[i])
	{
		len2++;
		i++;
	}
	size = (n >= len2) ? len2 : n;

	arr = malloc(sizeof(char) * (len1 + size + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		arr[i] = s1[i];

	for (j = 0; j < size; j++, i++)
		arr[i] = s2[j];

	arr[i] = '\0';

	return (arr);
}
