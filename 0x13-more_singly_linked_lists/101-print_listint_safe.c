#include "lists.h"

/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: head node in the list.
 *
 * Return: the number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;
	const listint_t *node = head, *temp = head;

	while (node != 0 && temp != 0 && temp->next != 0)
	{
		printf("[%p] %d\n", (void *)node, node->n);
		len++;
		node = node->next;
		temp = temp->next->next;
		if (node == temp)
		{
			printf("[%p] %d\n", (void *)node, node->n);
			len++;
			break;
		}
	}
	return (len);
}
