#include "main.h"
#include <stdio.h>

/**
 * factorial - factorial of number.
 * @n: number.
 *
 * Return: string lenth.
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	return ((factorial((n - 1)) * (n)));
}
