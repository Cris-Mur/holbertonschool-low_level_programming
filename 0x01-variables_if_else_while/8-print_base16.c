#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	for (char n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (char c = 57; c <= 102; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
