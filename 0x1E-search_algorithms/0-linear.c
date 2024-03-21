#include "search_algos.h"
/**
 * linear_search - searche for a value in an array using the Linear search.
 * @array: array to search.
 * @size: size of the array.
 * @value: value we looking for.
 * Return: return value's position.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
