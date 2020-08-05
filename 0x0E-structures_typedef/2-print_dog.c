#include "dog.h"

/**
 * print_dog - print elements of dog structure
 * @d: pointer to structure
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: ");
	if (d->name)
	{
		printf("%s\n", d->name);
	}
	else
		printf("(nil)\n");

	printf("Age: ");
	printf("%f\n", d->age);

	printf("Owner: ");
	if (d->owner)
	{
		printf("%s\n", d->owner);
	}
	else
		printf("(nil)\n");
}
