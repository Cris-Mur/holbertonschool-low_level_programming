#include <stdio.h>

/**
 * main - display input parameters
 * @argc: count input parameters
 * @argv: vector of input parameters
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
