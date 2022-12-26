#include <stdio.h>
/**
 * main - is used to add even fibonacci numbers upto 4000000
 *
 * Return: 0
 */

int main(void)
{
	unsigned long num1, num2, sum, value;

	num1 = 0;
	num2 = 1;
	value = 0;
	sum = num1 + num2;

	while (sum < 4000000)
	{
		if (sum % 2 == 0)
			value = value + sum;

		num1 = num2;
		num2 = sum;
		sum = num1 + num2;
	}
	printf("%lu\n", value);
	return (0);
}
