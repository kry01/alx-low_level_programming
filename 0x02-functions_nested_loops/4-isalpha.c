#include "main.h"
/**
 * _isalpha - check is a char
 * @c: var for char.
 * Return: return 0.
 */
int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
