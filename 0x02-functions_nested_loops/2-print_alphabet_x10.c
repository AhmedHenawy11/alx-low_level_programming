#include <stdio.h>

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times.
 * Description: followed by a new line
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
