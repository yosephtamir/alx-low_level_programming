#include "main.h"

/**
 * more_numbers - used to print 0 to 14 ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int j;
	int k[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4};

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
				_putchar('1');

			_putchar(k[j] + '0');
		}
		_putchar('\n');
	}
}
