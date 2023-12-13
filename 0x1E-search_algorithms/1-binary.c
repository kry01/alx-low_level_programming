#include "search_algos.h"
/**
 * binary_search - searche for a value in an array using the Binary search.
 * @array: array to search.
 * @size: size of the array.
 * @value: value we looking for.
 * Return: return value's position.
 */
int binary_search(int *array, size_t size, int value)
{
	int i, m, h = size - 1, l = 0;

	if (array == NULL)
		return (-1);

	while (h >= l)
	{
		m = l + (h - l) / 2;
		printf("Searching in array: ");
		for (i = l; i <= h; i++)
		{
			printf("%d", array[i]);
			if (i != h)
				printf(", ");
			else
				printf("\n");
		}
		if (array[m] == value)
			return (m);
		if (array[m] > value)
			h = m - 1;
		if (array[m] < value)
			l = m + 1;
	}
	return (-1);
}
