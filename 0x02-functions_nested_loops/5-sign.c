#include "main.h"

/**
 * print_sign - shows whether negative, positive or 0
 *
 * @n: is an ascii character used for argument
 *
 * return: 0 and 0, 1 and +, or -1 and -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
