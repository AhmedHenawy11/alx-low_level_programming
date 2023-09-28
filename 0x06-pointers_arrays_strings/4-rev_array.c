#include "main.h"
/**
 * reverse_array - revrse array of int
 * @a: array
 * @n: number of times
 * Return: s1[i] - s2[i]
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
