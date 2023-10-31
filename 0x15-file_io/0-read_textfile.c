#include "main.h"
#include <stdlib.h>

/**
* read_textfile -read and write from external file
* @letters: number of chars
* @filename: name of file
* Return: if success
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, filer, filew;
	char *str;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	str = malloc(sizeof(char) * letters);
	if (str == NULL)
	{
		close(file);
		return (0);
	}

	filer = read(file, str, letters);
	if (filer == -1)
	{
		free(str);
		close(file);
		return (0);
	}
	filer = read(file, str, letters);
	if (filer == -1)
	{
		free(str);
		close(file);
		return (0);
	}
	filew = write(STDOUT_FILENO, str, filer);
	free(str);
	close(file);
	if (filew == -1 || filer != filew)
	{
		return (0);
	}
	return (filer);
}
