#include "lists.h"

/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list.
 * @head: head element in the list.
 * @n: number to add.
 * Return:  the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == 0)
		return (0);
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (*head);
}
