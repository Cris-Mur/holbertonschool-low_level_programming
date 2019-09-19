#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char c = 97;

	while (c != 91)
	{
		if (c == 123)
		{
			c = 65;
		}
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
