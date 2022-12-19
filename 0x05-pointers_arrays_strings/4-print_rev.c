#include "main.h"
/**
 * print_rev - prints a reversed string
 *
 * @s: is a pointer
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i, j;

	i = 0;

	while (s[j++])
		i++;

	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);

	_putchar('\n');
}
