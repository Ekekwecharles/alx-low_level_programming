#include "main.h"
/**
 * _strncat - cat n no. of strings
 * @dest: First parameter
 * @src: Second parameter
 * @n: Third parameter
 * Return: char.
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	i = 0;
	while (i < n)
	{
		if (src[i] == '\0')
			break;
		dest[len + i] = src[i];
		i++;
	}

	return (dest);
}
