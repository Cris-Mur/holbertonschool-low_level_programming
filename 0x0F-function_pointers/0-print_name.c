#include "function_pointers.h"

/**
 * print_name - pointer to funtion print name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != 00 && f != 00)
	{
		f(name);
	}
	return;
}
