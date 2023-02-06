#include "main.h"
#include <stdlib.h>
/**
 * create_file - is used to create a file
 * @filename: is the name of the file to be created
 * @text_content: the tect which is going to be added to the file
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int opn, wrt, hoj = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != 0)
	{
		while (text_content[hoj])
			hoj++;
	}
	opn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(opn, text_content, hoj);

	if (opn == -1 || wrt == -1)
		return (-1);
	close(opn);

	return (1);
}
