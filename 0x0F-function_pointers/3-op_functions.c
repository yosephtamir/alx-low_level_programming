#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sum
 * @a: the first number
 * @b: the second number
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substraction
 * @a: the number from which the sec no will be substractd
 * @b: the substrctd number
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 * @a: number to be multiplied
 * @b: the second number to be multiplied
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - devision
 * @a: dividend
 * @b: divisor
 * Return: integer
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - remainder calculator
 * @a: dividend
 * @b: divisor
 * Return: remainder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
