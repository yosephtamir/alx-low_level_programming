#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - this is used to print a numbers including separators
 * @separator: is used to separate the intigers
 * @n: is the number of args to be passed
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (separator == NULL)
		printf("");
	if (n == 0)
		printf("");
	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d\n", va_arg(ap, int));
		else
			printf("%d, ", va_arg(ap, int));
	}
	va_end(ap);
}
