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
	for(int i = 48; i < 58; ++i)
	{
		putchar(i);
	}
	for (char j = 'a'; j < 'g'; ++j)
	{
		putchar(j);
	}

	putchar('\n');
	return (0);
}
