#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void _ofs(char *file_src, char *file_to);
void _cp(char *buffer, ssize_t op1, ssize_t op2, char *file_src, char *file_to);
char *_mkbuf(void);
#endif
