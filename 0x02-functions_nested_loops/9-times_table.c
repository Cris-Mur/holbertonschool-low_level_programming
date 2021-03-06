#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void function
 */

void times_table(void)
{
	int colum, fila;

	for (colum = 0; colum <= 9; colum++)
	{
		for (fila = 0; fila <= 9; fila++)
		{
			int result = colum * fila;

			if (result <= 9)
			{
				_putchar(result + 48);
			}
			else if (result >= 10)
			{
				_putchar((result / 10) + 48);
				_putchar((result % 10) + 48);
			}
			if (((fila + 1) * (colum)) < 10 && fila != 9)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
			}
			else if (((fila + 1) * (colum)) >= 10 && fila != 9)
			{
				_putchar(44);
				_putchar(32);
			}
		}
		_putchar('\n');
	}
}
