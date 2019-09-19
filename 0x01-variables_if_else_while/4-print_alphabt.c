#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	for (char c = 97; c <= 122; c++)
	{
		if (c == 101 || c == 113)
		{
			c++;
		}
		putchar(c);
	}
	putchar('\n');
	return (0);
}
