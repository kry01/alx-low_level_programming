#include "lists.h"

/**
 * reverse_listint -  function that reverses a listint_t linked list.
 * @head: header node in the list.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *h;

	if ((*head)->next == 0)
		return (*head);
	prev = *head;
	h = (*head)->next;
	prev->next = NULL;
	while (h->next != 0)
	{
		*head = h;
		h = h->next;
		(*head)->next = prev;
		prev = *head;
	}
	*head = h;
	h = h->next;
	(*head)->next = prev;
	prev = *head;
	return (*head);
}
