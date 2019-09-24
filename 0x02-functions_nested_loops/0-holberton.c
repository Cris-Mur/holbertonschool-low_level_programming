#include "holberton.h"

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char str[9] = "Holberton";

	for (int i = 0; i <= 9; i++)
	{
		char c = str[i];

		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
