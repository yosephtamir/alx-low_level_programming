#include <stdio.h>

/**
 * main -  Entery point
 *
 * This function is used to print an intiger number from 0 to 9.
 * I have used for loop to do it.
 * Finaly it prints new line.
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; ++i)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
