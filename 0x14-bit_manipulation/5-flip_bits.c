#include "main.h"

/**
 * flip_bits - number of bits you would need to flip to get from one number.
 * @n: 1st number.
 * @m: 2nd nuùber.
 *
 * Return: number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int d;
	int count = 0;

	d = n ^ m;
	while (d)
	{
		if (d & 1)
			count++;
		d = d >> 1;
	}
	return (count);
}
