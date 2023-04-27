#include "lists.h"

/**
 * add_node_end -  function that adds a new node at the end of a list_t list.
 * @head: first node.
 * @str: string.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *h;
	list_t *tmp;

	h = malloc(sizeof(list_t));
	if (h == 0)
		return (0);
	h->str = strdup(str);
	h->len = strlen(str);
	h->next = 0;
	tmp = *head;
	if (tmp == 0)
		*head = h;
	else
	{
		while (tmp->next != 0)
			tmp = tmp->next;
		tmp->next = h;
	}
	return (*head);
}
