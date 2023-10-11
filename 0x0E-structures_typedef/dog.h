#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * struct dog - dog informtion
 * @name: First index
 * @age: Second index
 * @owner: Third index
 * Description: description
 */
struct dog
{
	char *name;
	int age;
	char *owner;
};


#endif
