#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: unsigned int 1.
 * @size: unsigned int 2.
 * Return: pointer or NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *x;
	char *y;
	unsigned int index;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	x = malloc(size * nmemb);

	if (x == NULL)
	{
		return (NULL);
	}

	y = x;

	for (index = 0; index < (size * nmemb); index++)
	{
		y[index] = '\0';
	}

	return (x);
}
