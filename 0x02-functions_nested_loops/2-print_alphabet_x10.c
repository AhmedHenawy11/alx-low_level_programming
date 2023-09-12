#include <stdio.h>

/**
 * main - prints the alphabet in lowercase 10 times.
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
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
