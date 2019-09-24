#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: parameter input
 * Return: always last digit
 */

int print_last_digit(int n)
{
	n = n % 10;
	if (n <= -1)
	{
		n = n * -1;
		_putchar(n + 48);
		return (n);
	}
	_putchar(n + 48);
	return (n);
}
