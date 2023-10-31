#include "main.h"

/**
 * append_text_to_file - append text to file.
 * @filename: name of the file.
 * @text_content: a string content.
 * Return:  success -1 or --1 if fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fil, l, wr;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	fil = open(filename, O_WRONLY | O_APPEND);
	wr = write(fil, text_content, l);
	if (fil == -1 || wr == -1)
		return (-1);

	close(fil);
	return (1);
}
