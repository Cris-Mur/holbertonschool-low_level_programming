#include "holberton.h"

/**
 * swap_int - swap values
 * @a: pointer input
 * @b: pointer input
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;

	*a = *b;
	*b = aux;
}
