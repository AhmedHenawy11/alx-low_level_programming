#include <stdio.h>
#include "variadic_functions.h"
# include <stdarg.h>
/**
 * print_numbers - variadic function prits the input numpers
 * @separator: passed char(comma)
 * @n: the const number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	unsigned int sum = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum = va_arg(args,unsigned int);
		printf("%d", sum);
        if (i < n - 1 && separator != NULL)
        {
            printf("%s", separator);
        }
	}
    printf("\n");
	va_end(args);
}
