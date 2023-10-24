#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: poppy's name.
 * @age: poppy's age.
 * @owner: poppy's owner.
 * Return: a pointer.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int x, y, z;
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
	{
		free(ptr);
		return (0);
	}

	for (x = 0; name[x]; x++)
		;
	for (y = 0; owner[y]; y++)
		;
	ptr->name = malloc(x + 1);
	ptr->owner = malloc(y + 1);


	if (ptr->name == NULL || ptr->owner == NULL)
	{
		free(ptr->name), free(ptr->owner), free(ptr);
		return (NULL);
	}
	for (z = 0; z < x; z++)
	{
		ptr->name[z] = name[z];
	}
	ptr->name[z] = '\0';
	for (z = 0; z < y; z++)
	{
		ptr->owner[z] = owner[z];
	}
	ptr->owner[z] = '\0';
	ptr->age = age;
	return (ptr);



}
