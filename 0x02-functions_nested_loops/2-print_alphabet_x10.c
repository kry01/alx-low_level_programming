#include "main.h"
/**
 * print_alphabet_x10 - return alphabetic 10 times in order and in lower case.
 *
 * Return: return 0.
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
