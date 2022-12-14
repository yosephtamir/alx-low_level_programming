#include "main.h"

/**
 * times_table - prints 9 times table
 *
 * this function prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, a, t, o;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			a = i * j;
			t = a / 10;
			o = a % 10;

			if (j == 0)
			{
				_putchar('0');
			}
			else if (a < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(o + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(t + '0');
				_putchar(o + '0');
			}
		}
		_putchar('\n');
	}
}
