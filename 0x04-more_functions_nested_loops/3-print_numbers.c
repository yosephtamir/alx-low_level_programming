#include "main.h"

/**
 * print_numbers - is used to print 0 to 9
 *
 * Return: void
 */

void print_numbers(void)
{
	int i;

	i = 0;

	while (i <= 9)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
