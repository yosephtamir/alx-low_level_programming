#include <stdio.h>

/**
 * main -  Entery point
 *
 * this function is used to print z - a.
 *  and on this code I used for loop and putchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char i;
	char  b = '\n';

	for (i = 'z'; i >= 'a'; --i)
	{
		putchar(i);
	}
	putchar(b);
	return (0);
}
