#include <stdio.h>
#include "variadic_functions.h"
# include <stdarg.h>
/**
 * print_strings - variadic function prints string
 * @separator: passed char(comma)
 * @n: the const number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *string;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char*);
		if (string == NULL)
		{
			printf("(nill)");
		}
		else
		{
			printf("%s", string);
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
