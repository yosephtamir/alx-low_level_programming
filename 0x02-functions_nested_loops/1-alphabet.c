#include "main.h"

/**
 * main - Entery point
 *
 * description: The project print_alphabet - print alphabet
 *
 * Return: Always 0 (Success).
 */


void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; ++i)
	{
		_putchar(i);
	}
		_putchar('\n');
}
