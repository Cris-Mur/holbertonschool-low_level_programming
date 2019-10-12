#include "holberton.h"
#include <stdio.h>
/**
 * print_times_table - print n times table
 * @n: input parameter
 * Return: void
 */

void print_times_table(int n)
{
	int x, y;

	for (y = 0; y <= n; y++)
	{
		for (x = 0; x <= n; x++)
		{
			printf("%d", (x * y));
			if (x != n)
			{
				if (y * (x + 1) <= 9)
				{
					printf(",   ");
				}
				else if (y * (x + 1) < 100)
				{
					printf(",  ");
				}
				else if (y * (x + 1) >= 100)
				{
					printf(", ");
				}
			}
		}
		printf("\n");
	}
}
