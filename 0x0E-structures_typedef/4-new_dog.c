#include "dog.h"
#include <string.h>

/**
 * _strdup - duplicate a str in heap memory
 * @str: input string
 * Return: duplicated string
 */
char *_strdup(char *str)
{
	size_t sz = 0, x;
	char *dup = NULL;
	while (str[sz])
		sz++;
	dup = malloc(sz * (sizeof(char)));
	if (!dup)
		return (NULL);
	for (x = 0; x < sz; x++)
		dup[x] = str[x];
	return (dup);
}


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

	doge->name = _strdup(name);
	doge->owner = _strdup(owner);
	doge->age = age;
	return (doge);

}
