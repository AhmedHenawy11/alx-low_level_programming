#include "main.h"
/**
 * reverse_array - revrse array of int
 * @a: array
 * @n: number of times
 * Return: s1[i] - s2[i]
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		i++;
	}
	while (i > 0)
	{
		i--;
		printf("%d", a[i]);
		if (i != 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
