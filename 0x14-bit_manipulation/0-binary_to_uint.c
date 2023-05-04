#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: b is pointing to a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, p = 1;
	unsigned int d = 0;

	if (b == 0)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	for (; i > 0; i--)
	{
		d += (b[i - 1] - '0') * p;
		p *= 2;
	}
	return (d);
}
