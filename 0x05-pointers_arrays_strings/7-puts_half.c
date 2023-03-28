#include "main.h"
/**
 * puts_half - a function.
 *
 *@str: string.
 *
 */
void puts_half(char *str)
{
	int count = 0, i;

	while (str[count] != '\0')
	{
		count++;
	}
	if (count % 2 != 0)
		count++;
	for (i = count / 2; i <= count; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
