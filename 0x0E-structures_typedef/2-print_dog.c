#include "dog.h"

/**
 * print_dog - print elements of dog structure
 * @d: pointer to structure
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: ");
		if (d -> name)
		{
			printf("%s\n", d->name);
		}
		else
			printf("(nil)\n");

		printf("Age: ");
		if (d -> age >= 0.0000)
		{
			printf("%f\n", d -> age);
		}
		else
			printf("(nil)\n");

		printf("Owner: ");
		if (d -> owner)
		{
			printf("%s\n", d -> owner);
		}
		else
			printf("(nil\n)");
	}
}
