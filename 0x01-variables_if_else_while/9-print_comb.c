#include <stdio.h>

/**
 * main - Entry point
 *
 * this function prints a numbers starting from 0-10 or zero
 * by separating them using comman
 * in this function i have used for loop
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; ++i)
	{
		putchar(i);

		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
