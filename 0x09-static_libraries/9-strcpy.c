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
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
