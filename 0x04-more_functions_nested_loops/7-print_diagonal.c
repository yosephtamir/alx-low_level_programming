#include "main.h"

/**
 * print_diagonal - diagonal line
 *
 * @n: ascii character 
 *
 * Return: void.
 */

void print_diagonal(int n)
{
	int j;
	int k;
	k = 0;

	if (n > 0)
	{
		while (k < n)
		{
			for (j = 0; j < k; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			k++;

		}
	}
	else
	{
		_putchar('\n');
	}
}
