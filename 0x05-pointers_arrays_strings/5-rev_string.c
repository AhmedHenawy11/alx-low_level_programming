#include <stdio.h>
#include "main.h"
/**
* rev_string - printing in revrse
* @s: the string
*/

void rev_string(char *s)
{
	int l = 0;
	int ll = 0;
	char *r;

	while (s[l])
	{
		l++;
	}
	while (l--)
	{
		r[ll] = s[l];
		ll++;
	}
	*s = *r;
}
