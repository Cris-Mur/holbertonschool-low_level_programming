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
	doge->name = malloc(strlen(name) + 1);
	if (doge.name)
	{
		doge->name = name;
	}
	else
	{
		free_dog(doge);
	}
	doge->owner = malloc(strlen(owner) + 1);
	if (doge->owner)
	{
		doge->owner = owner;
	}
	else
	{
		free_dog(doge);
	}
	doge->age = age;
	return (doge);

}
