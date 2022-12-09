#include <stdio.h>

/**
 * main - Entery point
 *
 * This function is used to print a number from 0 to 10 using putchar
 *
 * return: Always zero(success)
 */

int main(void)
{
	for(int i = 0; i < 10; ++i)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
