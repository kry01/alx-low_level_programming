#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: linked list.
 * @str: string.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *h;

	h = malloc(sizeof(list_t));
	if (h == 0)
		return (0);
	h->str = strdup(str);
	h->len = strlen(str);
	h->next = *head;
	*head = h;
	return (*head);
}
