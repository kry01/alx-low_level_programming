#include "main.h"
/**
 * _memset -  function to fill the memory.
 *
 * @s: the first memory.
 * @b: charactere b.
 * @n: the size.
 *
 * Return: return value.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
