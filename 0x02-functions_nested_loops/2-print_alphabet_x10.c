#include "main.h"

/**
 * this function is used to print a lower case alphabet 10 times using,
 * nested loop. this project has two functions the main function
 * which is excuted first and the print_alphabet_x10 function,
 * which is used to print the alphabet 10 times.
 * This project has also prototyping, since the function print_alphabet_x10,
 *  is below the main function.
 */

void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
	for (i = 'a'; i <= 'z'; ++i)
	{
		_putchar(i);
	}
	_putchar('\n');
	}
}
