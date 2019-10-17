#include "holberton.h"

/**
 * _calloc - my calloc
 * @nmemb: number of memory of bytes
 * @size: size of bytes
 * Return: point inizialize in 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb > 0 && size)
	{
		P = malloc(nmemb * size);
		if (!p)
		{
			free(p);
			return(NULL);
		}
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		p[i] = 0;
	}
	return (p);
}
