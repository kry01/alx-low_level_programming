#include "lists.h"

/**
 * free_listint2 -  function that adds a new node at the end of a list..
 * @head: head node of the list.
 *
 * Return: nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while ((*head) != NULL)
	{
		temp = (*head)->next;
		free(*head);
		(*head) = temp;
	}
	*head = NULL;
}
