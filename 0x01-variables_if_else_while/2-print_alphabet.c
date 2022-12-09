#include <stdio.h>

/**
 * main : Entery point
 *
 * this is used to print a - z
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char i;
	char  b = '\n';

	for (i = 'a'; i <= 'z'; ++i)
	{
		putchar(i);
		putchar(b);
	}
	return (0);
}
