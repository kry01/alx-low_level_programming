#include "main.h"

/**
 * _isdigit - This function for knowing if c is uppercase.
 *
 * @c: char
 *
 * Return: 1 and 0.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
