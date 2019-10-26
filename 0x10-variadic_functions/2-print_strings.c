#include "variadic_functions.h"

/**
 * print_strings - funtion that print n strings
 * @separator: input string that use separator in display
 * @n: number of input arguments
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int c;
	char *myString;

	va_start(list, n);

	for (c = 0; c < n; c++)
	{
		myString = va_arg(list, char*);
		if (myString)
		{
			printf("%s", myString);
		}
		else
			printf("(nil)");

		if (separator && c < n - 1)
		{
			printf("%s", separator);
		}
		else
		{
			putchar(10);
		}
	}
	va_end(list);
}
