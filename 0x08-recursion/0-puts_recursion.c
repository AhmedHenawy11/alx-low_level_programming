#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - check the code
 *@s: passed string
 * Return: none
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
