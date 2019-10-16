#include "holberton.h"

/**
 * argstostr -
 * @ac: argument counter
 * @av: argument vector
 * Return: av string
 */
char *argstostr(int ac, char **av)
{
	int i, a, j, k;
	char *new;

	a = ac;

	for (i = 0; av[i] && a > 0; i++)
	{
		for (j = 0; av[i][j] && a > 0; j++)
		{
			if (av[i][j + 1] == 00)
			{
				j++;
				av[i][j] = 10;
				a--;
			}
		}
	}

	new = malloc(sizeof(char *) * j);
	for (k = 0; k < j; k++)
		new[k] = av[0][k];
	return (new);
}
