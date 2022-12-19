#include "main.h"

/**
 * puts_half - is used to print half of string
 *
 * @str: is an argument
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, j, dher;

	i = 0;

	dher = 0;

	while (str[i++])
		dher++;

	if ((dher % 2) == 0)
		j = dher / 2;

	else
		j = (dher + 1) / 2;

	for (i = j; i < dher; i++)
		_putchar(str[i]);

	_putchar('\n');
}
