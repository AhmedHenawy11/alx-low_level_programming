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
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	int c = 0;

	if (s1 == NULL)
	{
		s1 = "\0";
	}
	if (s2 == NULL)
	{
		s2 = "\0";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	new = malloc(sizeof(char) * (j + i + 1));

	for (l = 0; s1[l]; l++)
	{
		new[l] = s1[l];
		k++;
	}
	for (c = 0; s2[c]; c++)
	{
		new[k] = s2[c];
		k++;
	}
	new[k] = '\0';
	return (new);
}
