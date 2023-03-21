#include "main.h"
/**
 * print_times_table - prints the time from 00:00 to 23:59
 * @n: number of numbers
 **/
void print_times_table(int n)
{
	int i, j, mult;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(0 + '0');
			for (j = 1; j <= n; j++)
			{
				mult = i * j;
				_putchar(',');
				_putchar(' ');
				if (mult <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(mult + '0');
				}
				else if (mult > 9 && mult < 100)
				{
					_putchar(' ');
					_putchar((mult / 10) + '0');
					_putchar((mult % 10) + '0');
				}
				else
				{
					_putchar((mult / 100) + '0');
					_putchar(((mult % 100) / 10) + '0');
					_putchar((mult % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
