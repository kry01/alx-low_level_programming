#include "lists.h"

/**
 * free_list -  function that frees a list_t list.
 * @head: linked list.
 *
 */

void free_list(list_t *head)
{
	list_t *h;
	h = head;
	while (h != 0)
	{
		free(h->str);
		free(h);
		head = head->next;
		h = head;
	}
}
