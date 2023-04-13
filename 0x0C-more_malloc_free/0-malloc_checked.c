#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked -  function that allocates memory using malloc.
 * @b: integer b.
 *
 * Return: return pointer or 0.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == 0)
		exit(98);
	return (p);
}
