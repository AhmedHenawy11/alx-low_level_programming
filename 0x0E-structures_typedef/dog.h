#ifndef DOG_H
#define DOG_H

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
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
