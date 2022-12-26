#include <stdio.h>
/**
 * main - is used to print the 50 fifty fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	long int i, num1, num2, sum;

	num1 = 0;
	num2 = 1;
	sum = num1 + num2;

	for (i = 0; i < 50; i++)
	{
		printf("%d, ", sum);
		num1 = num2;
		num2 = sum;
		sum = num1 + num2;
	}
	printf("\n");
}
