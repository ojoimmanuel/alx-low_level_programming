#include "lists.h"

/**
 * add_node - fxn to add a new node at beginning of list_t list
 * @head: head of a linked list
 * @str: string data for node
 *
 * Return: number of elements
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int length;
	char *string;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (str == NULL)
	{
		string = NULL;
		length = 0;
	}
	else
	{
		string = strdup(str);
		while (str[length] != '\0')
		{
			length++;
		}
	}

	new->len = length;
	new->str = string;
	new->next = *head;
	*head = new;

	return (*head);
}
