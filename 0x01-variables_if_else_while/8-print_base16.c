#include <stdio.h>

/**
 * main -  Entery point
 *
 * this function is used to print hexadecimal.
 *  and on this code I used for loop and putchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int j;
	int  b = '\n';

	for (int i = '0'; i <= '9'; ++i)
	{
		putchar(i);
	}
	for (j = 'a'; j <= 'f'; ++j)
	{
		putchar(j);
	}

	putchar(b);
	return (0);
}
