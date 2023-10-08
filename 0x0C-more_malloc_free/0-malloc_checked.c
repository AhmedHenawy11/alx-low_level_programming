#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - check the code
 *@b: int
 * Return: ptr(pointer to heap).
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}