#include "main.h"

/**
 * print_numbers - This function for knowing if c is uppercase.
 *
 * @a: char
 * @b: char
 *
 * Return: 1 and 0.
 */

void print_numbers(void)
{
	int i;

	for(i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
