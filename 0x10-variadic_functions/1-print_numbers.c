#include "variadic_functions.h"

/**
 * print_numbers - print n numbers with defined separator
 * @separator: input string that use to separator
 * @n: integer to number of arguments
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int c;
	int num;

	va_start(list, n);
	for (c = 0; c < n; c++)
	{
		num = va_arg(list, int);
		printf("%d", num);
		if (c < n - 1)
		{
			printf("%s", separator);
		}
	}
	putchar(10);
	va_end(list);
}
