#include <stdio.h>
#include "dog.h"

/**
 * init_dog - check the code
 * @dog: struct
 * @name: name
 * @age: age
 * @owner: owner's name
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog my_dog;

	my_dog.name = name;
	my_dog.age = age;
	my_dog.owner = owner;

	return (0);
}
