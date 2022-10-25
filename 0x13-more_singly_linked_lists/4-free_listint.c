#include "lists.h"

/**
 * free_listint - frees listint_t list
 * @head: head of the linked list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	tmp = head;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
}
