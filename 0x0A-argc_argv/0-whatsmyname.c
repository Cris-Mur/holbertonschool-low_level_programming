#include <stdio.h>

/**
 * main - test argc
 * @argc: argument that count inputs
 * @argv: vector that collect arguments of input
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
