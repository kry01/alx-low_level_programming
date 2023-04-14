#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _realloc - function that reallocates a memory block using malloc and free..
 * @ptr: pointer.
 * @old_size: the old size.
 * @new_size: the new size.
 *
 * Return: return pointer or 0.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	p = malloc(new_size);
	if (p == 0)
	{
		free(ptr);
		return (0);
	}
	free(ptr);
	return (p);
}
