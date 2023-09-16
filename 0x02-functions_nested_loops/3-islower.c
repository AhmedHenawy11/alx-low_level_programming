#include "main.h"

/**
 * _islower - check of char is lowercase .
 * @c: is the char to be checked
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'z'; ch <= 'a'; ch--)
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
