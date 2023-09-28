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
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
	}
	printf("\n");
}
