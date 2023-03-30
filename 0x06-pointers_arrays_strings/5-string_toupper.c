#include "main.h"

/**
 * string_toupper - the function to change the lower case to upper case.
 *
 * @str: the string
 *
 * Return: return to upper.
 */

char *string_toupper(char *str)
{
	unsigned long int i = 0;

	for (i = 0; i < sizeof(str); i++)
	{
		if (*(str + i) <= 122 && *(str + i) >= 97)
		{
			*(str + i) = *(str + i) - 32;
		}
	}
	return (str);
}
