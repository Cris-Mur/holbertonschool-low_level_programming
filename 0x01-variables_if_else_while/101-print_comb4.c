#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n1, n2, n3;

	for (n1 = 48; n1 <= 57; n1++)
	{
		for (n2 = 48; n2 <= 57; n2++)
		{
			for (n3 = 48; n3 <= 57; n3++)
			{
				if (n1 < n2 && n2 < n3)
				{
					putchar(n1);
					putchar(n2);
					putchar(n3);
					if (n1 != 55)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
