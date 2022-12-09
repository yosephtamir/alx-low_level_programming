#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * this function prints whether the last digit is negative positive or 0
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, b;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	b = n % 10;


	if (b > 5)
	{
		printf("Last digit of %d", n);
		printf(" is %d", b);
		printf(" and is greater than 5\n");
	}
	else if (b < 6 &&  b != 0)
	{
		printf("Last digit of %d", n);
		printf(" is %d", b);
		printf(" and is less than 6 and not 0\n");
	}
	else
	{
		printf("Last digit of %d", n);
		printf(" is %d", b);
		printf(" and is 0\n");
	}
	return (0);
}
