#include <stdio.h>



/**
 * atoi -  string to integer
 * @s: string to be converted
 *
 * Return: the int converted
 */
int atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}
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
