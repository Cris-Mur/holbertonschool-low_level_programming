#include "dog.h"

/**
 * free_dog - free structure
 * @d: structure
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
