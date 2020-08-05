#include "holberton.h"

/**
 * flip_bits - count you would need bits to flip number
 * @n: input number
 * @m: input other number
 * Return: cant of a bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int papu;
	unsigned long int flipper;

	flipper = n ^ m;

	papu = 0;
	while (flipper != 0)
	{
		if ((flipper & 1) == 1)
		{
			papu++;
		}
		flipper = flipper >> 1;
	}
	return (papu);
}
