#include "main.h"

/**
 * create_file - file created.
 * @filename: name of the file.
 * @text_content: a string content.
 * Return:  success -1 or --1 if fails.
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fil, l, wr;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	fil = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(fil, text_content, l);
	if (fil == -1 || wr == -1)
		return (-1);

	close(fil);
	return (1);
}
