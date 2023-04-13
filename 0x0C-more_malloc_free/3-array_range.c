#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - function that creates an array of integers.
 * @min: number of members.
 * @max: size of one memeber..
 *
 * Return: return pointer or 0.
 */
int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (0);
	p = malloc((max - min + 1) * sizeof(int));
	if (p == 0)
		return (0);
	for (i = 0; i <= max - min; i++)
		*(p + i) = min + i;
	return (p);
}
