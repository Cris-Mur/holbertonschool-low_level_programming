#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n1, n2;

	for (n1 = 0; n1 <= 99; n1++)
	{
		for (n2 = 0; n2 <= 99; n2++)
		{
			if (n1 < n2)
			{
				putchar((n1 / 10) + 48);
				putchar((n1 % 10) + 48);
				putchar(32);
				putchar((n2 / 10) + 48);
				putchar((n2 % 10) + 48);
				if (n1 != 98 || n2 != 99)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
putchar('\n');
return (0);
}
