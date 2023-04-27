#include "lists.h"

/**
 * list_len -  function that returns the number of elements.
 * @h: linked list.
 *
 * Return: return length of the list.
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != 0)
	{
		h = h->next;
		i++;
	}
	return (i);
}
