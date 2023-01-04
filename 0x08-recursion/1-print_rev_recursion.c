#include "main.h"
/**
 * _print_rev_recursion - is used to recurse from right to left
 *
 * @s: is used to to recieve an string
 *
 * Return: 0;
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion((s + 1));
		_putchar(*(s + 0));
	}
}
