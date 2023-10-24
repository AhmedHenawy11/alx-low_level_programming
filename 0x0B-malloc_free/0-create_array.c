#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: array size.
 * @c: char.
 * Return: pointer or NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size);


	if (ptr == 0 || size == 0)
	{
		return (NULL);
	}
	else
	{
		while (size--)
		{
			ptr[size] = c;
		}
	}
	return (ptr);
}
