#include "main.h"

/**
 * main - Entery point
 *
 * description: The project print_alphabet - print alphabet
 * and it has two functions the first one is the main function,
 * which is excuted first.and the second function isthe function,
 * used to print an alphabet in lower case following new line.
 * and in this project I have also used prototyping since I put a function,
 * print_alphabet under the main function.
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
