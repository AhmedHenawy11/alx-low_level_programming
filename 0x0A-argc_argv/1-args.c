#include <stdio.h>
#include <stdlib.h>

/**
 * main - argc, argv
 * description: return the count of program arguments
 * @argc: argumnts count
 * @argv: arguments passed
 * Return: (0)
*/

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
