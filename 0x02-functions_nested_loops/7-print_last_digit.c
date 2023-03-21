#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: var for char.
 * Return: return 0.
 */
int print_last_digit(int n)
{
	int r = n % 10;

	_putchar('0' + r);
	_putchar('\n');
	return (r);
}
