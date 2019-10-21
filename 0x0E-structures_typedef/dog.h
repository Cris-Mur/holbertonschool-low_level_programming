#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - structure dog
 * @name: string of the structure
 * @age: integer of the structure
 * @owner: string of the structure
 */

struct dog
{
	char *name;
	float age;
	char* owner;
} dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
