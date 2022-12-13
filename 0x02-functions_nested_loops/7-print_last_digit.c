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
	_putchar(r % 10);
	return (r % 10);
}
