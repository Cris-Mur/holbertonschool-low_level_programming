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
 * append_text_to_file - append text at the end of a file
 * @filename: name of a file to edit
 * @text_content: content of a append in the file
 * Return: Always 1 (success0)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int log, wr;

	if (filename)
	{
		log = open(filename, O_WRONLY | O_APPEND);

		wr = log;
		if (log <= 1)
			return (_ERR);

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
