#include "lists.h"

/**
 * sum_listint - returns sum of all data of listint_t list
 * @head: head of the linked list
 *
 * Return: sum of data
 */

int sum_listint(listint_t *head)
{
	listint_t *node;
	int sum = 0;

	if (head == NULL)
		return (sum);
	node = head;
	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
