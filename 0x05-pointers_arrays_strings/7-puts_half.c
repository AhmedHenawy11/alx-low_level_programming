#include <stdio.h>
#include "main.h"

/**
* puts_half - print half of string.
* @str:the string
*/

void puts_half(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
		x++;

	for (x /= 2; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');

}
