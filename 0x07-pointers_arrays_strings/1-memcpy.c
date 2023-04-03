#include "main.h"
/**
 * _memcpy - function to copy memory.
 *
 * @dest: destination.
 * @src: sorce.
 * @n: the nomber in memory.
 *
 * Return: the value.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
