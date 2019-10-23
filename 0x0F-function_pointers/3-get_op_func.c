#include "function_pointers.h"
#include "3-calc.h"

/**
 * get_op_func - select which funtion will use
 * @s: input string
 * Return: pointer to funtion
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op[0] != s[0] && i < 4)
	{
		i++;
	}
	return (ops[i].f);
}
