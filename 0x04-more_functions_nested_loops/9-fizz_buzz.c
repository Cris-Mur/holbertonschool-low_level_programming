#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int try;

	for (try = 1; try <= 100; try++)
	{
		if ((try % 3 != 0) && (try % 5 != 0))
		{
			printf("%d", try);
		}
		else if (try % 3 == 0 && try % 5 == 0)
		{
			printf("Fizz Buzz");
		}
		else if (try % 5 == 0)
		{
			printf("Buzz");
		}
		else if (try % 3 == 0)
		{
			printf("Fizz");
		}
		if (try != 100)
		{
			printf(" ");
		}
		else
			printf("\n");
	}
	return (0);
}
