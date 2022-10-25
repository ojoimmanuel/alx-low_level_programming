#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given position
 * @head: head of the linked list
 * @idx: index point to insert new node
 * @n: int data for inserted node
 *
 * Return: address of new node. NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *new, *prev;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	node = *head;
	prev = *head;
	if (idx == 0)
	{
		new->next = node;
		*head = new;
		return (new);
	}
	while (node != NULL)
	{
		if (i == idx)
		{
			new->next = node;
			prev->next = new;
			return (new);
		}
		prev = node;
		node = node->next;
		i++;
	}
	if (idx == i)
	{
		prev->next = new;
		return (new);
	}
	free(new);
	return (NULL);
}
