#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int c1, c2;

	for (c1 = 48; c1 <= 57; c1++)
	{
		for (c2 = 48; c2 <= 57; c2++)
		{
			putchar(c1);
			putchar(c2);
			if (c1 != 57 && c2 != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
		if (c1 != 57 && c2 != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
