#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	for (char c = 48; c <= 102; c++)
	{
		if (c == 57)
		{
			c = 97;
		}
		putchar(c);
	}
	putchar('\n');
	return (0);
}
