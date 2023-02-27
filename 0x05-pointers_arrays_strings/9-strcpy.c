#include "main.h"
/**
* _strcpy -> print in 2s
* @dest: the string to be printed in rev
* @src: Second par
*
* Return: char
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
