#include "main.h"

/**
 * print_numbers - print 0 to 9..
 *
 *
 * Return: 1 and 0.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == 50 || i == 52)
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
