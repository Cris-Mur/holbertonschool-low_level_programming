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
 * create_file - funtion that create file with content
 * @filename: name of a file
 * @text_content: content of a file
 * Return: Always 1 (success)
 */
int create_file(const char *filename, char *text_content)
{
	int log, wr;
	if (filename && text_content)
	{
		log = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
			if (log <= 1)
				return (_ERR);

			wr = log;
		log = buflen(text_content);
		wr = write(wr, text_content, log);
		if (wr == log)
			return (log);
	}
	return (_ERR);
}
