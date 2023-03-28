#include "main.h"
/**
 * puts2 - a function.
 *
 *@str: string.
 *
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i = i + 2)
	{
		if (str[i] == '.')
			break;
		_putchar(str[i]);
	}
	_putchar('\n');
}
