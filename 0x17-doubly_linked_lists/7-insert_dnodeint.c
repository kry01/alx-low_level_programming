#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 *
 * @h: the head node.
 * @idx: the index.
 * @n: the data as number.
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	temp = *h;
	if (*h == NULL)
	{
		*h = new_node;
		return (new_node);
	}
	while (temp != NULL)
	{
		if (i == idx)
		{
			temp->prev->next = new_node;
			new_node->prev = temp->prev;
			new_node->next = temp;
			temp->prev = new_node;
		}
		temp = temp->next;
		i++;
	}
	return (new_node);
}
