#include <stdio.h>

/**
 * main - fiftty numbers fibonacci
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int long n1, n2, aux, add;
	int i;

	n1 = 0;
	add = 0;

	for (n2 = 1; n2 <= 4000000;)
	{
		aux = n2;
		n2 = n2 + n1;
		n1 = aux;
		if (n2 % 2 == 0)
		{
			add = add + n2;
		}
	}
	printf("%lu\n", add);
	return (0);
}
