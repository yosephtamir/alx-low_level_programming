#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - is a function used to add an arguments
 * @n: is a number of arguments
 * Return: 0 or sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, j = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
		j = va_arg(ap, int) + j;

	va_end(ap);

	return (j);
}
