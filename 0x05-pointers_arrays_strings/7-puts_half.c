#include <stdio.h>
#include "main.h"

/**
* puts_half - print half of string.
* @str:the string
*/

void puts_half(char *str)
{
	int j = 0;
	int i = 0;

	while (str[j])
	{
		j++;
	}
	if (j % 2 > 0)
	{
		j += 1;
	}
	i = j / 2;
	while (i < j)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
