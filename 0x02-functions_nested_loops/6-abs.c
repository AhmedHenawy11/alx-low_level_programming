#include "main.h"

/**
 * _abs - print_abslute value of number - test the sign of the number
 * @int: the number to be tested
 * Return: aboluse vlaue of number
 */
int _abs(int)
{
	int number;

	if (number < 0)
	return (-number);
	else if (number == 0)
	return (0);
	else
	return (number);
}
