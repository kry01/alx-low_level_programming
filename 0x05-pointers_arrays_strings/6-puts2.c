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

	for (i = 0; i >= 0; i = i + 2)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[i]);
	}
}
