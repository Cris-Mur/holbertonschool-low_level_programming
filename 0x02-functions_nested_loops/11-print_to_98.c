#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 99
 * @n: parameter input
 * Return: void function
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d", n);

		if (n == 98)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
		n++;
	}

	while (n > 98)

	{
		printf("%d", n);

		if (n == 98)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
		n--;
	}

	if (n == 98)
	{
		printf("%d\n", n);
	}
}
