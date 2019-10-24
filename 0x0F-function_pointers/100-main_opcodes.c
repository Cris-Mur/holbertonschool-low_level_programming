#include "function_pointers.h"

/**
 * main - print assebler thing
 * @argc: argument counter
 * @argv: argument vector
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
