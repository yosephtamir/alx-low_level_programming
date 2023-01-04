#include "main.h"

/**
 * _puts_recursion - is used to recurse a character
 *
 * @s: is a character from main
 *
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*(s + 0));
		_puts_recursion((s + 1));
	}
	else
	{
		_putchar('\n');
		return;
	}
}
