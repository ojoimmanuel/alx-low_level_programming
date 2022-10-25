#include "lists.h"

/**
 * add_nodeint - adds a new node at the start of listint_t
 * @head: head of the linked list
 * @n: integer
 *
 * Return: address of element. NULL on failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}