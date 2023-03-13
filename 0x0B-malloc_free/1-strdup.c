#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Initializes an array of character with a specifiec character
 * @str: First parameter
 * Return: ponter
 */

char *_strdup(char *str)
{
	int i, len = 0, j;
	char *arr;

	if (str == NULL)
		return (NULL);
	j = 0;
	while (str[j])
	{
		len++;
		j++;
	}
	arr = (char *)malloc(len * sizeof(char));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		arr[i] = str[i];

	return (arr);
}



