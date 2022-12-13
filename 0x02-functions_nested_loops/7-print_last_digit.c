#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @r: is an ascii character of an argument
 *
 * Return: the last digit of number
 */

int print_last_digit(int r)
{
	if (r > 0)
	{
		int b;
		b = r % 10;
		
		_putchar(b);
		return (b);
	}
	else if (r < 0)
	{
		int b;

		r = r * (-1);
		b= r % 10;

		_putchar(b);
		return (b);
	}
	else
	{
		_putchar(0);
		return (0);
	}
}

