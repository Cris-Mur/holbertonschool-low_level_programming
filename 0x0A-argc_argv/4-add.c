#include <stdio.h>
#include <stdlib.h>

/**
 * main - add all positive numbers
 * @argc: count input parameters
 * @argv: vertor of input
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i, add;

	add = 0;
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] >= 48 && *argv[i] <= 57)
		{
			add = add + (atoi(argv[i]));
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", add);
	return (0);
}
