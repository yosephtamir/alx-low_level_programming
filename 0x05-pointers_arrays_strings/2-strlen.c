/**
 * _strlen - is used to count the length of an string
 *
 * @s: passes the argument
 *
 * Return: i
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
