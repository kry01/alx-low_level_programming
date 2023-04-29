#include "lists.h"

/**
 * listint_len -  function that returns the number of elements in a list.
 * @h: head element in the list.
 *
 * Return: length.
 */

size_t listint_len(const listint_t *h)
{
	int len = 0;

	while (h != 0)
	{
		len++;
		h = h->next;
	}
	return (len);
}
