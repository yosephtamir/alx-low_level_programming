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
	int i, j, gud;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	gud = i;
	j = gud / 2;
	while (j <= gud)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
