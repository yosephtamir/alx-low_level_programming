#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - this is used to print a numbers including separators
 * @separator: is used to separate the strings
 * @n: is the number of args to be passed
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *ab;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		ab = va_arg(ap, char *);
		if (ab == NULL)
		{
			printf("(nil)");
			return;
		}

		if (i == n - 1)
			printf("%s\n", ab);
		else
		{
			printf("%s", ab);
			if (separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(ap);
}
