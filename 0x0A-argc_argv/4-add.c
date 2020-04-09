#include <stdio.h>
#include <stdlib.h>

/**
 * f_char - func that find any char diferent of num
 * @str: input string
 * Return: 1 if string is a num, 0 if no
 */
int f_char(char *str)
{
	int n = 0;

	while (str[n])
	{
		if (str[n] < 48 || str[n] > 57)
		{
			return (0);
		}
		n++;
	}
	return (1);
}

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
		if (f_char(argv[i]))
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
