#include "variadic_functions.h"

/**
 * sum_them_all - sum n cant of numbers
 * @n: number of argumnets
 * Return: sum variable
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list listilla;
	unsigned int c;
	int sumita;

	va_start(listilla, n);

	sumita = 0;
	for (c = 0; c < n; c++)
	{
		sumita = sumita + va_arg(listilla, int);
	}
	va_end(listilla);
	return (sumita);
}
