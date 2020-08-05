#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char c = 48;

	while (c <= 57)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
