#include "main.h"

/**
 * is_palindrome -  function that returns 1 if a string is a palindrome.
 * @s: the string.
 *
 * Return: return the palindrome.
 */

int is_palindrome(char *s)
{
	if (sizeof(s) == 0)
		return (0);
	else
		palindrome(*s, 0, sizeof(s) - 1);

}

/**
 */

int palindrome(char *str, int start, int end)
{
	if (end > 0 || start < end / 2)
	{
		if (*(str + start) == *(str + end))
		{
			palindrome(*str, start + 1, end - 1);
			return (1);
		}
		else
			return (0);
	}
	else
		return (0);

}
