#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char c = 97;

	while (c <= 122)
	{
		if (c == 101 || c == 113)
		{
			c++;
		}
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
