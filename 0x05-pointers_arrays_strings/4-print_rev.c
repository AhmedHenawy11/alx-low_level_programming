#include <stdio.h>
#include "main.h"
#include <string.h>
/**
* print_rev - printing in revrse
* @s: the string
*/

void print_rev(char *s)
{
	int len = strlen(s);

	for (int i = len - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
