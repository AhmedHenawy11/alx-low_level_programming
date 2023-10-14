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
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
