#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: head element in the list.
 * Return: nothing.
 */

void free_listint(listint_t *head)
{
	while (head->next != NULL)
	{
		free(head);
		head = head->next;
	}
	free(head);
}
