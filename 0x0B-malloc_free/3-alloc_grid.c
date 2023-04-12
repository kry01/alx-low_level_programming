#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that concatenates two strings.
 *
 * @width: number.
 * @height: number..
 *
 * Return: pointer.
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (width <= 0 || height <= 0)
		return 0;
	p = (int **) malloc(sizeof(int *) * height);
	if (p == 0)
		return (0);
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			*(p + i) = malloc (sizeof(int));
			*(*(p + i) + j) = 0;
		}
	}
	return (p);
}
