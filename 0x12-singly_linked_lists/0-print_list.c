#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: list to print.
 *
 * Return: number of nudes.
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != 0)
	{
		if (h->str == 0)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
