#include <stdio.h>
#include "dog.h"

/**
 * init_dog - check the code
 * @d: struct
 * @name: name
 * @age: age
 * @owner: ner's name
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
