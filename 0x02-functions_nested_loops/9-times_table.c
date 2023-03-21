#include "main.h"
/**
 * times_table - prints the time from 00:00 to 23:59
 **/
void times_table(void)
{
	int i, j, mult;

	for (i = 0; i < 10; i++)
	{
		_putchar(0 + '0');
		for (j = 1; j < 10; j++)
		{
			mult = i * j;
			_putchar(',');
			_putchar(' ');
			if (mult <= 9)
			{
				_putchar(' ');
				_putchar(mult + '0');
			}
			else
			{
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
			}
		}
		_putchar('\n');

	}
}
