#include "dog.h"

/**
 * new_dog - funtion that create
 * @name: string of structure
 * @age: float of the structure
 * @owner: string of structure
 * Return: dir of structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doge;

	doge = malloc(sizeof(dog_t));
	if (!doge)
		return (NULL);

	doge->name = name;
	doge->age = age;
	doge->owner = owner;

	return (doge);

}
