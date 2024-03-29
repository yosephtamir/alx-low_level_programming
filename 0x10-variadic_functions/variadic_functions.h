#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
/**
 * op - is a struct used for all types
 * @c: char
 * @f: function
 */

typedef struct op
{
	char c;
	void (*f)(va_list);
} op_t;
void print_all(const char * const format, ...);
#endif
