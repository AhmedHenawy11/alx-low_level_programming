#include <stdio.h>
#include "main.h"

/**
* puts2 - prit every other character.
* @str: the string.
*/

void puts2(char *str)
{
	int j = 0;
	int i = 0;

	while (str[j])
	{
		j++;
	}
	while (i < j)
	{
		_putchar(str[i]);
		i += 2;
	}
}
