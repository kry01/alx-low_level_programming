#include "main.h"

/**
 * print_triangle - write a triangle.
 *
 * @size: size of triangle..
 *
 */

void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		if (i < size)
			_putchar(' ');
		for (j = 1; j <= size; j++)
		{
			if (j >= size - i)
				break;
			_putchar(' ');
		}
		for (k = size - i; k < size; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
