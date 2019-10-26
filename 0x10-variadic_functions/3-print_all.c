#include "variadic_functions.h"

void _print_char(char c)
{
	printf("%c", c);
}

void _print_numbers(int n)
{
	printf("%d", n);
}

void _print_float(float f)
{
	printf("%f", f);
}

void _print_string(char *s)
{
	if (s)
	{
		printf("%s", s);
	}
}



/**
 * print_all - print all
 *
 * Return: void
 */
void print_all(const char* const format, ...)
{
	va_list list;
	int i;

	char *sep = "";
	i = 0;
	va_start(list, format);

	while (format[i])
	{
		switch (format[i])
		{
		case 99:
			_print_char(va_arg(list, int));
			break;

		case 105:
			_print_numbers(va_arg(list, int));
			break;

		case 102:
			_print_float(va_arg(list, double));
			break;

		case 115:
			_print_string(va_arg(list, char*));
			break;
		default:
			break;
		}
		if (format[i + 1])
		{
			printf("%s", sep);
			sep = ", ";
		}
		i++;
	}
	putchar(10);
}
