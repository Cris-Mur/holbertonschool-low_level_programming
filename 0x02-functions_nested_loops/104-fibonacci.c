#include <stdio.h>

/**
 * main - print first 98 fibonacci
 * Return: always 0 (success)
 */
int main(void)
{
	unsigned long n1, n2, aux, cnt;
	unsigned long c1, c2, d1, d2, t1, t2;

	n1 = 1;
	n2 = 2;
	printf("%lu, %lu, ", n1, n2);
	for (cnt = 2; cnt <= 90; cnt++)
	{
		aux = n2;
		n2 = n2 + n1;
		n1 = aux;
		printf("%lu, ", n2);
	}
	c1 = n1 / 1000;
	d1 = n1 % 1000;
	c2 = n2 / 1000;
	d2 = n2 % 1000;
	for (; cnt <= 97; cnt++)
	{
		t1 = c1 + c2;
		t2 = d1 + d2;
		t1 += t2 / 1000;
		t2 %= 1000;
		printf(cnt == 97 ? "%lu%03lu\n" : "%lu%03lu, ", t1, t2);
		c1 = c2;
		c2 = t1;
		d1 = d2;
		d2 = t2;
	}
	return (0);
}
