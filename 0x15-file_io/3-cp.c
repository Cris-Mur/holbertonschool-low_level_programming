#include "holberton.h"

/**
 * main - function that recive arguments and send to the _cp funct
 * @argc: argument counter
 * @argv: argument vector
 * Return: always 0 (success) or depend of exit error
 */

int main(int argc, char **argv)
{
	if (argc < 2 || argc > 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	_ofs(argv[1], argv[2]);
	return (0);
}


/**
 * _mkbuf - make a buffer of 1024 bytes
 * Return: address of the buffer
 */

char *_mkbuf(void)
{
	char *buffer = NULL;

	buffer = malloc(sizeof(char) * 1025);
	if (!buffer)
		exit(137);
	return (buffer);
}


/**
 * _ofs - function that open and set enviroment to cp file a into file b
 * @file_src: input name of the file source
 * @file_to: input name of the file dest
 * Return: void
 */

void _ofs(char *file_src, char *file_to)
{
	char *buffer = NULL;
	ssize_t log_f1 = -1, log_f2 = -1, op1, op2;

	if (!file_src || !file_to)
		return;

	buffer = _mkbuf();

	log_f1 = open(file_src, O_RDONLY);
	if (log_f1 <= 1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_src);
		free(buffer), exit(98);
	}
	op1 = log_f1;

	log_f2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (log_f2 <= 1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		close(op1), free(buffer), exit(99);
	}
	op2 = log_f2;

	_cp(buffer, op1, op2, file_src, file_to);

	log_f1 = close(op1), log_f2 = close(op2);
	if (log_f1 == -1 || log_f2 == -1)
	{
		dprintf(2, "Error: Can't close fd %lu\n",
			log_f1 == -1 ? op1 : op2);
		exit(100);
	}
}


/**
 * _cp - loop of copy data of the file A into file B
 * @buffer: input buffer of data
 * @op1: input file descriptor for file A
 * @op2: input file descriptor for file B
 * @file_src: input name of the file source
 * @file_to: input name of the file dest
 * Return: void
 */

void _cp(char *buffer, ssize_t op1, ssize_t op2, char *file_src, char *file_to)
{
	ssize_t log_f1, log_f2;

	while (1)
	{
		log_f1 = read(op1, buffer, 1024);
		if (log_f1 == -1)
		{
			dprintf(2, "Error: Can't read from file %s", file_src);
			dprintf(2, "\n");
			close(op1), close(op2), exit(98);
		}
		log_f2 = write(op2, buffer, log_f1);
		if (log_f2 < 0)
		{
			dprintf(2, "Error: Can't write to %s\n", file_to);
			close(op1), close(op2), exit(99);
		}
		if (log_f2 < 1024)
			break;
	}
}
