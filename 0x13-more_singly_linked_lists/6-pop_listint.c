#include "lists.h"

/**
 * pop_listint -  deletes the head node of a listint_t linked list.
 * @head: head node of the list.
 *
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	int num;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = (*head)->next;
	num = (*head)->n;
	free(*head);
	*head = temp;
	return (num);
}
