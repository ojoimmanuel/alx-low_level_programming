#include "lists.h"

/**
 * add_node_end - fxn to add a new node at the end of list_t list
 * @head: head of a linked list
 * @str: string data for node
 *
 * Return: number of element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	char *string;
	list_t *tmp;
	int length = 0;

	tmp = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	string = strdup(str);
	if (string == NULL)
	{
		free(new);
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}
	new->len = length;
	new->str = string;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new;

	return (new);
}
