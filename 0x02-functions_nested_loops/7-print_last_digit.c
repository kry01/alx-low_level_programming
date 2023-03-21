#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: var for char.
 * Return: return 0.
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (n < 0)
		i = -i;
	_putchar(i + '0');
	return (i);
}
