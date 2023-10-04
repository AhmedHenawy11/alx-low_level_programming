#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - creates an array of chars,
 * and initializes it with a specific char.
 * @str: string.
 * Return: pointer or NULL.
 */
char *_strdup(char *str)
{
	char *new_s;
	int i = 0;
	int j = 0;

	if (str == NULL)
	return (NULL);
	while (str[i] != '\0')
	{
		i++;
	}
	new_s = malloc(sizeof(char) * (i + 1));

	if (new_s == NULL)
	return (NULL);
	for (j = 0; str[j]; j++)
	{
		new_s[j] = str[j];
	}
	return (new_s);
}
