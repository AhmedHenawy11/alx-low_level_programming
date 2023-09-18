#include "main.h"

/**
 * print_sign - test the sign of the number
 * @n: the number to be tested
 * Return: 1 if c is a letter, 0 otherwise
 */
int print_sign(int n)
	{
		if (n > 0)
		{
			_putchar('+');
			return (1);
		} else if (n == 0)
		{
			_putchar(48);
			return (0);
		} else if (n < 0)
		{
			_putchar('-');
		}
			return (-1);
	}