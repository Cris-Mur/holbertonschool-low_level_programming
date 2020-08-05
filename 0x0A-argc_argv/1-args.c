#include <stdio.h>

/**
 * main - test argc
 * @argc: count input parameters
 * @argv: vector of input parameters
 * Return: always 0 (success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
