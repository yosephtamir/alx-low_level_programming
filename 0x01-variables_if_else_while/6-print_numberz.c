#include <stdio.h>

/**
 * main - Entery point
 *
 * This function is used to print a number from 0 to 10 
 * I have used  for loop for this function
 *
 * return: Always 0 (success)
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
