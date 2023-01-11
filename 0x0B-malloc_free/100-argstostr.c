#include <stdlib.h>
#include "main.h"
/**
 * length - gets string length
 * @str: string
 * Return: string size
 */

int length(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * argstostr - is used to concatinate the given argument
 *
 * @ac: length of the arguments
 * @av: array of the arguments
 *
 * Return: pointe to new string
 */

char *argstostr(int ac, char **av)
{
	int len, i, j, k;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		len += length(av[i]) + 1;
	}

	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < length(av[i]); j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
