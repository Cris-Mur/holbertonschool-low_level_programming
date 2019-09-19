#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		if (c != 57)
		{
		putchar(44);
		putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
