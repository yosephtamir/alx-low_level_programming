#include <stdio.h>

/**
 * main - Entery point
 *
 * This function is used to print a number fromzero to 10 
 * using for loop
 *
 * return: Always zero(success)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; ++i)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
