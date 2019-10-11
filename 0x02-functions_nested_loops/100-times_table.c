#include "holberton.h"

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
			printf("%d", (x * y);
			       if (x != n)
			       {
				       if ((x * (y + 1)) < 10)
				       {
					       printf(",   ");
				       }
				       else if ((x * (y + 1)) > 10)
				       {
					       if ((x * (y + 1) < 100)
						       {
							       printf(",  ");
						       }
						       if ((x * (y + 1) > 100)
							       {
								       printf(", ");
