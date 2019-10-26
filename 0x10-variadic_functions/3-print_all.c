#include "variadic_functions.h"
/**
 * _print_char - print char
 * @list: input array
 * Return: void
 */
void _print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * _print_numbers - print integer
 * @list: input array
 * Return: void
 */
void _print_numbers(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * _print_float - print float
 * @list: input array
 * Return: void
 */
void _print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * _print_string - print string
 * @list: input array
 * Return: void
 */
void _print_string(va_list list)
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
 * @format: input string
 * Return: void
 */
void print_all(const char *const format, ...)
{
	va_list list;
	int i, j;

	cosito bicho[] = {
		{'c', _print_char},
		{'i', _print_numbers},
		{'f', _print_float},
		{'s', _print_string}
	};
	char *sep = "";

	i = 0;
	va_start(list, format);

	while (format && format[i])
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
