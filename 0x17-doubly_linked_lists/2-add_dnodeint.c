#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 *
 * @head: the head node.
 * @n: the data as number.
 * Return: the node or null.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	if (*head == NULL)
		new_node->next = NULL;
	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
	}
	*head = new_node;
	return (*head);
}
