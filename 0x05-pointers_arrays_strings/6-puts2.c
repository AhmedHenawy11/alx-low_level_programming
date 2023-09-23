#include <stdio.h>
#include "main.h"

/**
* puts2 - prit every other character.
* @str: the string.
*/

void puts2(char *str)
{
	int j = 0;

	while (str[j])
	{
		j++;
	}
	for (int i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
}
