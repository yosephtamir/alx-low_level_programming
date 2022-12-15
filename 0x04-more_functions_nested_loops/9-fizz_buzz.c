#include "main.h"
#include <stdio.h>

/**
 * main - entery point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		int a, b;

		a = i % 3;

		b = i % 5;

		if (a == 0 && b == 0)
		{
			printf("FizzBuzz ");
		}
		else if (b == 0)
		{
			printf("Buzz ");
		}
		else if (i == 100)
		{
			printf("Buzz");
		}
		else if (a == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
