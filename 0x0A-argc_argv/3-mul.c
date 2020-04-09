#include <stdio.h>
#include <stdlib.h>

/**
 * main - mul two numbers
 * @argc: count input parameter
 * @argv: vector of parameters
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	if (argc > 3 || argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	return (0);
}
