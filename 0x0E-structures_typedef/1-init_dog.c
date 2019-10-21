#include "dog.h"

/**
 * 1-init_dog - set things in dog struct
 * @d: pointer to struct
 * @name: set part of struct dog
 * @age: set part age  in struct
 * @owner: set string in struct
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d -> name = name;
	d -> age = age;
	d -> owner = owner;
}
