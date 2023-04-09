#include "main.h"

/**
 * get_endianess - gets endian of the machine
 * Return: 0 if big Endian
 *		1 if little endian
 */

int get_endianess(void)
{
	int num = 1;
	char *ptr = (char *)&num;

	if (*ptr == 1)
		return (1);
	return (0);
}
