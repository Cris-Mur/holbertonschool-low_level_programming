#include "holberton.h"

int sqrt_recursive(int, int);

/**
 * _sqrt_recursion - square root recursive
 * @n: input integer
 * Return: value of square root
 */


int _sqrt_recursion(int n)
{
	if (n > 0)
	{
		return (sqrt_recursive(0, n));
	}
	else
		return (-1);
}

/**
 * sqrt_recursive - compute square root
 * @v: iterator of value
 * @n: input integer
 * Return: valoe of square root
 */

int sqrt_recursive(int v, int n)
{
	if ((v * v) > n)
	{
		return (-1);
	}
	else if ((v * v) == n)
	{
		return (v);
	}
	else
		return (sqrt_recursive(v + 1, n));
}
