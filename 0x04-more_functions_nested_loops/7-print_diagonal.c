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
		_putchar('\\');
		_putchar('\n');
		for (j = 0; j < i + 1; j++)
		{
			_putchar(' ');
		}
	}
	_putchar('\n');
}
