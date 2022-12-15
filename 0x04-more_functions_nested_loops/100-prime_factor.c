#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0 (Succeess)
 */

int main(void)
{
	long int i = 612852475143;;
	long int j = 2;

	while (i != j)
	{
		if (i % j == 0)
		{
			i = i / j;
		}
		else
		{
			j++;
		}
	}

	printf("%li\n", i);

	return (0);
}
