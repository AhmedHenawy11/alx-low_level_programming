#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatinate two strings
 * @s1: string1.
 * @s2: string2
 * Return: pointer or NULL.
 */
char *str_concat(char *s1, char *s2)
{
	char *new;
	int i, j, k = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	int n = j + i + 1;

	new = malloc(n);

	for (j = 0; s1[j]; j++)
	{
		new[j] = s1[j];
		k++;
	}
	k += 1;
	for (j = 0; s2[j]; j++)
	{
		new[k] = s1[j];
		k++;
	}
	return (new);
}
