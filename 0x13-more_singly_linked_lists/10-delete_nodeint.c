#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a list.
 * @head: head node of the list.
 * @index: index of the node which to delete.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *node;
	unsigned int i;

	temp = *head;
	if (temp == 0)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		temp = temp->next;
		if (temp == 0)
			return (-1);
	}
	node =  temp->next;
	temp->next = node->next;
	free(node);
	return (1);
}
