#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional
 *
 * @grid: number.
 * @height: number..
 *
 * Return: pointer.
 */

int free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
