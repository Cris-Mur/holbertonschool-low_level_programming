#include "holberton.h"

/**
 * more_numbers - print numbers
 *
 * Return: void
 */

void more_numbers(void)
{
	int num, c;

	for (c = 0; c < 10; c++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				int orf;

				for (orf = 0; orf < 2; orf++)
				{
					int r;

					if (orf == 0)
					{
						r = num / 10;
					}
					else if (orf == 1)
					{
						r = num % 10;
					}
					_putchar(r + 48);
				}
			}
			else
				_putchar(num + 48);
		}
		_putchar('\n');
	}
}
