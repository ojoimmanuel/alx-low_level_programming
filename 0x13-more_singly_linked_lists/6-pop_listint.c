#include "lists.h"

/**
 * pop_listint - deletes head node & return head node's data
 * @head: head of the linked list
 *
 * Return: int (node data)
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	tmp = *head;
	n = 0;
	if (*head == NULL)
		return (n);
	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}
