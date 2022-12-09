#include <stdio.h>
/**
 * main -  Entery point
 *
 * this function is used to print a - z but escape q and e.
 *  and on this code I used for loop and putchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char i;
	char  b = '\n';

	for (i = 'a'; i <= 'z'; ++i)
	{
		if (i != 'q' && i != 'e')
			putchar(i);
	}
	putchar(b);
	return (0);

}
