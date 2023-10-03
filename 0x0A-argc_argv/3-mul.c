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
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	printf("%d\n", a * b);
	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}
	return (0);
}
