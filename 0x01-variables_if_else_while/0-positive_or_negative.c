#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main function goes here
 *
 * this function prints random numbers whether they are positive negative or 0
 *
 * then it Returns 0 or success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d", n);
		printf(" is negative\n");
	}
		else if (n > 0)
		{
			printf("%d", n);
			printf(" is positive\n");
		}
		else
		{
			printf("%d", n);
			printf(" is zero\n");
		}


	return (0);
}
