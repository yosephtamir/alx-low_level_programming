#include <stdio.h>

/**
 * main - Entery point
 *
 * This project has two functions the first one is the main function,
 *  which is excuted first.and the second function isthe function,
 *  used to print an alphabet in lower case following new line.
 *  and in this project I have also used prototyping since I put a function,
 *  print_alphabet under the main function.
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();
}

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; ++i)
	{
		putchar(i);
		putchar('\n');
	}
}
