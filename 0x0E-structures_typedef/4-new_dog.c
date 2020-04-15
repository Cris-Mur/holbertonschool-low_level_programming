#include "dog.h"

/**
 * _strdup - generate a new allocated memory and copy source
 * @str: input string
 * Return: duplicated string
 */
char *_strdup(char *str)
{
	size_t sz = 0, x = 0;
	char *dup = NULL;

	if (str)
	{
		while (str[sz])
			sz++;
		sz++;
		dup = malloc(sizeof(char) * sz);
		while (x < sz)
		{
			*(dup + x) = *(str + x);
			x++;
		}
	}
	return (dup);
}

/**
 * new_dog - initialize a new structure
 * @name: input str that is name of the dog
 * @age: input float that is age of the dog
 * @owner: input str that is owner of the dog
 * Return: new structure dir
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doge = NULL;
	char *n = NULL, *o = NULL;

	if (name && owner)
	{
		n = _strdup(name);
		if (!n)
			return (NULL);
		o = _strdup(owner);
		if (!o)
		{
			free(n);
			return (NULL);
		}
		doge = malloc(sizeof(dog_t));
		if (!doge)
		{
			free(n);
			free(o);
			return (NULL);
		}
		doge->age = age;
		doge->name = n;
		doge->owner = o;
		return (doge);
	}
	return (NULL);
}
