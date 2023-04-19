#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter.
 * @array: array.
 * @size: size of array.
 * @action: call-back function.
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array == 0 || size == 0 || action == 0)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
