#include "lists.h"

/**
 * get_nodeint_at_index -  function that returns the nth node of a list.
 * @head: head node of a list.
 * @index: index to find.
 *
 * Return: node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	temp = head;
	for (i = 0; i < index; i++)
	{
		temp = temp->next;
		if (temp == NULL)
			break;
	}
	return (temp);
}
