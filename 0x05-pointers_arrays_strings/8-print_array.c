#include <stdio.h>
#include "main.h"

/**
* print_array - pint numbers of n
* @n: lenth to print
*@a: Array
*/

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
		i++;
	}
	printf("\n");
}
