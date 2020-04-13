#include "dog.h"
#include <string.h>

/**
 * _len - lenght of a string
 * @str: input string
 * Return: size of string
 */
size_t _len(char *str)
{
	size_t sz = 0;

	while (str[sz])
		sz++;
	return (sz);
}

/**
 * _strdup - duplicate a str in heap memory
 * @str: input string
 * @sz: input size of the string
 * Return: duplicated string
 */
char *_strdup(char *str, size_t sz)
{
	size_t x;
	char *dup = NULL;

	dup = malloc((sz + 1) * (sizeof(char)));
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
	size_t sz = 0;
	dog_t *doge;

	sz = sizeof(dog_t);
	doge = malloc(sz);
	if (!doge)
		return (NULL);

	doge->name = _strdup(name, _len(name));
	if (!doge->name)
	{
		free(doge);
		return (NULL);
	}
	doge->owner = _strdup(owner, _len(owner));
	if (!doge->owner)
	{
		free(doge->name);
		free(doge);
		return (NULL);
	}
	doge->age = age;
	return (doge);

}
