#include "main.h"
/**
* rev_string -> string in reverse
* @s: the string to be printed in rev
*/

void rev_string(char *s)
{
	int i, n;
	char t[10];

	n = 0;
	while (s[n] != '\0')
		n++;

	for (i = 0; i < n; i++)
		t[i] = s[i];

	for (i = 0; i < n; i++)
		s[i] = t[(n - 1) - i];

}
