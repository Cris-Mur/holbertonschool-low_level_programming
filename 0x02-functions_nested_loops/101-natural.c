#include <stdio.h>

/**
 * main - main funtion
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int s, i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 5 == 0 || i % 3 == 0)
		{
			s = i + s;
		}
	}
	printf("%d\n", s);
	return (0);
}
