#include "lists.h"

/**
 * list_len - fxn to return number of elements in a linked list_t list
 * @h: head of a linked list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}

	return (size);
}
