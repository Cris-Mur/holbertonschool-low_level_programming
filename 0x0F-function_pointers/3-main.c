#include "function_pointers.h"
#include "3-calc.h"

/**
 * main - funtion that calculate two numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		int (*fun)(int, int);

		fun = get_op_func(argv[2]);

		if (fun != 00 || strlen(argv[2]) == 1)
		{
			printf("%d\n", fun(atoi(argv[1]), atoi(argv[3])));
			return (0);
		}
		printf("Error\n");
		exit(98);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
}
