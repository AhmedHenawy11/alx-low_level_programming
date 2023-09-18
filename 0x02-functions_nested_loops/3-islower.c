#include "main.h"

/**
 * _islower - check of char is lowercase .
 * @c: is the char to be checked
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
