#include <stdio.h>

/**
 * main - fiftty numbers fibonacci
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int long n1, n2, aux;
	int i;

	n1 = 0;
	n2 = 1;

	for (i = 2; i <= 50; i++)
	{
		aux = n2;
		n2 = n2 + n1;
		n1 = aux;
		if (i < 50)
		{
			printf("%lu, ", n2);
		}
		else
			printf("%lu\n", n2);
	}
	return (0);
}
