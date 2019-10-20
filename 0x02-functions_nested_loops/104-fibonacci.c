#include <stdio.h>

/**
 * main - print first 98 fibonacci
 * Return: always 0 (success)
 */
int main(void)
{
	long double n1, n2, aux, cnt;

	n1 = 0;
	n2 = 1;
	for (cnt = 0; cnt < 98; cnt++)
	{
		aux = n2;
		n2 = n2 + n1;
		n1 = aux;
		scanf("%Lf", &n2);
	}
	return (0);
}
