#include <stdio.h>
#include "variadic_functions.h"
# include <stdarg.h>
/**
 * sum_them_all - variadic function return the sum of argument inputs
 * @n: the const number of arguments
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	return (0);
	va_list args;
	int i;
	int sum = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	return (sum);
}
