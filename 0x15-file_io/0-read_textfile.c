#include "holberton.h"

#define _ERR 0
/**
 * buflen - size of bufer
 * @str: input string
 * Return: size of bufer
 */
size_t buflen(char *str)
{
	size_t size;

	size = 0;
	while (str[size])
		size++;

	return (size);
}

/**
 * read_textfile - funtion that read a file
 * @filename: input name of a file
 * @letters: size of a buffer
 * Return: Number of readed letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t log, op;
	char *buffersito;

	if (filename)
	{
		log = open(filename, O_RDONLY);
		if (log <= 1)
			return (_ERR);

		op = log;
		buffersito = malloc(sizeof(char) + letters);
		if (buffersito == NULL)
		{
			return (_ERR);
		}
		log = read(log, buffersito, letters);
		if (log == -1)
			return (_ERR);
		log = buflen(buffersito);
		log++;
		log = write(STDOUT_FILENO, buffersito, log);
		if (log == -1)
		{
			free(buffersito);
			return (_ERR);
		}
		close(op);
		free(buffersito);
		return (log);
	}
	return (_ERR);
}
