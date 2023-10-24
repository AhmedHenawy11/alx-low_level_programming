#include <stdio.h>
#include <stdlib.h>

/**
 * main - argc, argv
 * description: return the command line arguments
 * @argc: argumnts count
 * @argv: arguments passed
 * Return: (0)
*/

int main(int argc, char *argv[])
{
	int i = 0;

	while (i != argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
