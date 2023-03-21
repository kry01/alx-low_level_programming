#include "main.h"
/**
 * _islower - char is lowercase
 * @c: var for char
 * Return: return 0.
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);
}
