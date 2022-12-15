#include "main.h"

/**
 * print_most_numbers - prints numbers without 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int a;

	a = 0;

	for (a = 0; a <= 9; a++)
	{
		if (a != 2 && a != 4)
		{
			_putchar(a + '0');
		}
	}
	_putchar('\n');
}
