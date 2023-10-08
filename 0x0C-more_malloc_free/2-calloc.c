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

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	x = malloc(size * nmemb);

	if (x == NULL)
	{
		return (NULL);
	}
	return (x);
}
