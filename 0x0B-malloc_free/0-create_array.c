#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars, and initializes it with a specific char.
 *
 * @size: size of the array.
 * @c: specific char.
 *
 * Return: pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *p = malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0)
		return ('\0');
	else
	{
		for (i = 0; i <= size; i++)
			p[i] = c;
		return p;
	}
	free(p);
}
