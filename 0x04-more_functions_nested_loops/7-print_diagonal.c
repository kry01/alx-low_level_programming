#include "main.h"

/**
 * print_diagonal - write a diagonal line in tarminal.
 *
 * @n: number of line.
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		if (i > 0)
			_putchar('\n');
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
	}
	_putchar('\n');
}
