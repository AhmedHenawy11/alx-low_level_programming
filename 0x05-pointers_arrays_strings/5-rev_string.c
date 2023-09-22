#include <stdio.h>
#include "main.h"
/**
* rev_string - printing in revrse
* @s: the string
*/

void rev_string(char *s)
{
	int len = strlen(s);
	int i = 0;
	int j = len - 1;

	while (i < j)
	{
		char temp = s[i];

		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
