#include "variadic_functions.h"

void _print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

void _print_numbers(va_list(list))
{
	printf("%d", va_arg(list, int));
}

void _print_float(va_list(list))
{
	printf("%f", va_arg(list, double));
}

void _print_string(va_list(list))
{
	char *s = va_arg(list, char*);

	if (!s)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}


/**
 * print_all - print all
 *
 * Return: void
 */
void print_all(const char* const format, ...)
{
	va_list list;
	int i, j;

	cosito bicho [] = {
		{'c', _print_char},
		{'i', _print_numbers},
		{'f', _print_float},
		{'s', _print_string}
	};
	char *sep = "";

	i = 0;
	va_start(list, format);

	while (format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (bicho[j].simbol == format[i])
			{

				printf("%s", sep);
				bicho[j].fn(list);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	putchar(10);
	va_end(list);
}
