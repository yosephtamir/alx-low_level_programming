#include "main.h"
/**
 * puts2 - is used to print other character of a string
 *
 * @str: is an argument
 *
 * Return: void
 */

void puts2(char *str)
{
	int i, j;

	i = 0;

	j = 0;
	while (str[i++])
		j++;
	for (i = 0; i < j; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
