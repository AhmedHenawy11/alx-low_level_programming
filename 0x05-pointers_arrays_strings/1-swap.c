#include <stdio.h>
#include "main.h"

/**
* swap_int - function is swaping variables by reference
* @a: the first pointer parameter
* @b: the second pointer parameter
*/

void swap_int(int *a, int *b)
{
	int c = *b;
	*b = *a;
	*a = c;
}
