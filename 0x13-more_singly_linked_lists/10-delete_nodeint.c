#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of a linked list
 * @head: head of the linked list
 * @index: index at which to delete
 *
 * Return: 1 on success. -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;
	prev = *head;
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	while (current->next != NULL)
	{
		if (i == index)
		{
			next->prev = current->next;
			free(current);
			return (1);
		}
		prev = current;
		current = current->next;
		i++;
	}
	if (i == index)
	{
		prev->next = NULL;
		free(current);
		return (1);
	}

	return (-1);
}
