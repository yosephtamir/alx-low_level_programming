#include <stdio.h>
#include <stdlib.h>
/**
 * check - is used to check if ut is number
 * @arg: is an array passed to this function
 *
 * Return: 0 if it is number or 1 if not
 */

int check(char *arg)
{
	int j = 0;

	while (*(arg + j) != '\0')
	{
		if (*(arg + j) >= '0' && *(arg + j) <= '9')
		{
			j++;
		}
		else
		{
			return (1);
		}
	}
	return (0);
}
/**
 * main - is used to add numbers
 *
 * @argc: is a parameter of length argv
 * @argv: is an array pointer
 *
 * Return: 0 if successful or 1 if not
 */

int main(int argc, char *argv[])
{
	int i, sum = 0, check2 = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		i = 1;
		while (i < argc)
		{
			check2 = check(argv[i]);

			if (check2 == 0)
			{
				sum = sum + atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
