#include <stdio.h>
#include "main.h"
#include <string.h>
/**
* print_rev - printing in revrse
* @s: the string
*/

void print_rev(char *s)
{
	int l = 0;

	while (s[l])
	{
		l++;
	}
	while (l--)
	{
		_putchar(s[l]);
	}

	_putchar('\n');
}
