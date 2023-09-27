#include "main.h"
#include <stdio.h>

/**
 * _strncpy - conacatinate strings
 * @dest: first string
 * @src: Secone one
 * @n:input value
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
