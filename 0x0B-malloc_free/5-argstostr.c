#include "holberton.h"

/**
 * argstostr - concatenate argument vector with new lines
 * @ac: argument counter
 * @av: argument vector
 * Return: av string
 */
char *argstostr(int ac, char **av)
{
	size_t sz = 0, x, y, s = 0;
	char *av_c = NULL;

	if (ac != 0 && av)
	{
		for (y = 0; y < (size_t)ac; y++)
			for (x = 0; av[y][x]; x++)
				sz++;
		sz += (ac - 1);
		av_c = malloc(sz*(sizeof(char)));
		if (!av_c)
			return (NULL);
		for (y = 0; y < (size_t)ac && s < sz; y++, s++)
		{
			for (x = 0; av[y][x] && s < sz; x++, s++)
			{
				av_c[s] = av[y][x];
			}
			av_c[s] = '\n';
		}
		return (av_c);
	}
	return (NULL);
}
