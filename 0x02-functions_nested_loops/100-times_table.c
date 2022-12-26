#include "main.h"
/**
 * print_times_table - is used to print a number
 *
 * @n: is used to pass the argument
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, mult;

	for (i = 0; i <= n; i++)
	{
		if (n < 0 || n > 15)
			break;
		for (j = 0; j <= n; j++)
		{
			mult = i * j;
			if (j == 0)
			{
				_putchar('0');
			}
			else if (mult < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(mult + '0');
			}
			else if (mult >= 10 && mult <= 99)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
			}
			else if (mult >= 100 && mult <= 225)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((mult / 100) + '0');
				_putchar(((mult / 10) % 10) + '0');
				_putchar((mult % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
