#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list chr;
	unsigned int index;

	char *str;

	va_start(chr, n);
	
	for (index = 0; index < n; index++)
	{
		str = va_arg(chr, char *);

		printf("%s", (str != NULL) ? str : "(nil)");

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(chr);
}
