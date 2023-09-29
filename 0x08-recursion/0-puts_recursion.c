#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - check the code
 *@s: passed string
 * Return: none
 */
void _puts_recursion(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		_putchar(s[n]);
		n++;
	}
	_putchar('\n');
}
