#include "holberton.h"

#define _ERR -1
/**
 * buflen - size of bufer
 * @str: input string
 * Return: size of bufer
 */
size_t buflen(char *str)
{
	size_t size;

	size = 0;
	if (str)
		while (str[size])
			size++;

	return (size);
}

/**
 * create_file - funtion that create file with content
 * @filename: name of a file
 * @text_content: content of a file
 * Return: Always 1 (success)
 */
int create_file(const char *filename, char *text_content)
{
	int log, wr;

	if (filename)
	{
		log = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

		if (log <= 1)
			return (_ERR);

		wr = log;
		log = buflen(text_content);
		wr = write(wr, text_content, log);
		close(wr);
		if (wr == log)
			return (1);
		else
			return (_ERR);
	}
	return (_ERR);
}
