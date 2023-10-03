#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - argc, argv
 * description: return the sum of command line arguments
 * @argc: argumnts count
 * @argv: arguments passed
 * Return: (0)
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;

	if (argc < 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
