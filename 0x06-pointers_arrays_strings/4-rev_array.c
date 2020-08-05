#include "holberton.h"

/**
 * reverse_array - reverse array
 * @a: array input
 * @n: elements of array
 * return: void
 */

void reverse_array(int *a, int n)
{
	int i, aux;

	i = 0;
	n--;
	while (n > i)
	{
		aux = a[i];
		a[i] = a[n];
		a[n] = aux;
		n--;
		i++;
	}
}
