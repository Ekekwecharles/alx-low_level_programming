#include "main.h"
/**
 * _strcat - cat two strings
 *
 * @dest: Firest parameter
 * @src: Second parameter
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len + i]  = src[i];
	}

	dest[len + i] = '\0';

	return (dest);

}


