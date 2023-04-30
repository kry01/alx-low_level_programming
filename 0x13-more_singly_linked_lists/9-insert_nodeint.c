#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head node of a list.
 * @idx: index where to add the number.
 * @n: the number to add.
 *
 * Return: the address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == 0)
		return (0);
	temp = *head;
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}
	for (i = 0; i < idx - 1; i++)
	{
		temp = temp->next;
		if (temp == 0)
			return (0);
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
