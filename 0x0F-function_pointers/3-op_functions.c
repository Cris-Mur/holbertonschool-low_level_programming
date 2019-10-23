#include "function_pointers.h"

/**
 * op_add - funtion that add two numbers
 * @a: input number
 * @b: input number
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - funtion that subtract two numbers
 * @a: input number
 * @b: input number
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - funtion that multiply two numbers
 * @a: input number
 * @b: input number
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - funtion that divide two numbers
 * @a: input number
 * @b: input number
 * Return: result
 */
int op_div(int a, int b)
{
	return (b == 0 ? 0 : a / b);
}

/**
 * op_mod - funtion that module two numbers
 * @a: input number
 * @b: input number
 * Return: result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
