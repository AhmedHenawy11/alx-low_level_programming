#include <stdio.h>
#include "main.h"

/**
* print_array - pint numbers of n
* @n: lenth to print
*@a: Array
*/

void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < (n - 1); c++)
	{
		printf("%d, ", a[c]);
	}
		if (c == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
