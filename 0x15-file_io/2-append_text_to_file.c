#include "main.h"
#include <stdlib.h>
/**
 * append_text_to_file - is used to add file at the end of a file
 * @filename: is the file name
 * @text_content: is the line of text to be added
 * Return: 0 or opn
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int opn, wrt, hoj = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != 0)
	{
		while (text_content[hoj])
			hoj++;
	}
	opn = open(filename, O_WRONLY | O_APPEND);
	wrt = write(opn, text_content, hoj);

	if (opn == -1 || wrt == -1)
		return (-1);
	close(opn);

	return (1);
}
