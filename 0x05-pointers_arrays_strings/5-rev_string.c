#include "main.h"

/**
 * rev_string - is used to reverse an string
 *
 * @s: is an argumnt
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, gud, gid;
	char jal, dhum;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	gud = i - 1;
	gid = gud / 2;
	while (gid >= 0)
	{
		jal = s[gud - gid];
		dhum = s[gid];
		s[gid] = jal;
		s[gud - gid] = dhum;
		gid--;
	}
}
