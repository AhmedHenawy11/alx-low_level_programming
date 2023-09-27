#include "main.h"
#include <stdio.h>

/**
 * _strncat - conacatinate strings
 * @dest: first string
 * @src: Secone one
 * @n:input value
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j = 0;

	while (dest != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
