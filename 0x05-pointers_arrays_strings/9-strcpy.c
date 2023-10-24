#include <stdio.h>
#include "main.h"

/**
* _strcpy - copying a string
* @dest: to be returned
* @src: the source of copy
* description: copying a string to another
* Return: a string
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
