#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print_from n number to 98
 * @n: the num
 * Return: void
 */
void print_to_98(int n)
{
	while (n < 99)
	{
		if (n < 10)
		{
			_putchar((n % 10) + '0');
		}
		else
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n++;
	}
}
